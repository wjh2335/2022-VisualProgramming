#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#include <microsoft.ui.xaml.window.h>
#endif

using namespace winrt;
using namespace winrt::Microsoft::Graphics::Canvas::UI::Xaml;
using namespace winrt::Microsoft::UI::Xaml::Input;
using namespace winrt::Windows::Foundation;
using namespace winrt::Windows::UI;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::Controls::Primitives;
using namespace Microsoft::UI::Xaml::Navigation;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::ColorPicker1::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, (1920-1050)/2, (1080-700)/2, 1050, 700, NULL);
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    struct Color mYcol = Microsoft::UI::Colors::Green();
    void MainWindow::CanvasControl_Draw(CanvasControl const& /*sender*/, CanvasDrawEventArgs const& args)
    {
        if (IsChecked1)
        {
            args.DrawingSession().DrawEllipse(px, py, 80, 60, mYcol, 8);
            args.DrawingSession().DrawText(L"Hello!", px - 25, py - 15, Microsoft::UI::Colors::Yellow());
        }
    }

    void MainWindow::CanvasControl_PointerMoved(IInspectable const& sender, PointerRoutedEventArgs const& e)
    {
        CanvasControl canvas = sender.as<CanvasControl>();
        if (IsChecked1)
        {
            px = e.GetCurrentPoint(canvas).Position().X;
            py = e.GetCurrentPoint(canvas).Position().Y;
        }
        canvas.Invalidate();
    }

    void MainWindow::ColorPicker_ColorChanged(ColorPicker const& /*sender*/, ColorChangedEventArgs const& args)
    {
        mYcol = args.NewColor();
    }

    void MainWindow::AppBarToggleButton1_Click(IInspectable const& /*sender*/, RoutedEventArgs const& /*e*/)
    {
        if (IsChecked1)
        {
            IsChecked1 = FALSE;
            Button1().Label(L"Disable");
        }
        else
        {
            IsChecked1 = TRUE;
            Button1().Label(L"Enable");
        }
    }

    void MainWindow::AppBarToggleButton2_Click(IInspectable const& /*sender*/, RoutedEventArgs const& /*e*/)
    {
        if (IsChecked2)
        {
            IsChecked2 = FALSE;
            Button2().Label(L"Disable");

            colorPanel().Visibility(Visibility::Collapsed);
        }
        else
        {
            IsChecked2 = TRUE;
            Button2().Label(L"Enable");

            colorPanel().Visibility(Visibility::Visible);
        }
    }
}
