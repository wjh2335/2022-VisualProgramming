#### 조송하

```
(T/F)
WinUI 3에서 Win2D를 활용하여 펜을 제작하려면 "Microsoft.Graphics.Win2D"라는 NuGet Package를 설치하여야 한다.
답: T

(4문1택)
웹뷰어를 제작하기 위해 MainWindow.xaml에서 삽입하여야 하는 네임스페이스는?
1) xmlns:canvas 2) xmlns:controls 3) xmlns:webview 4) xmlns:view

(칸 메우기)
펜의 색상을 변경하기 위한 컨트롤은 [#]이다.
답: ColorPicker
```

#### 신영룡

```
(T/F)
Nuget을 통해서 DirectX를 활용할 때, 각각의 프로젝트마다 새로 설치해야 한다.
답: T

(4문1택)
사진을 출력하려고 할 때, 사용하지 않는 Xaml 코드는?
1) Image 2) BitmapImage 3) Image.Source 4) MenuFlyout
답: 4)

(칸 메우기)
컬러픽커를 통해 색깔을 변경하려고 할 때, ColorChanged 이벤트 처리기 안에 들어갈 코드는
myCol = args.[#]();다.
답: NewColor
```

#### 서창환

```
(T/F)
winUI3에서는 Xaml의 이벤트 처리기를 통하여 C++ 또는 C#언어로 작성한 코드를 동작시킬 수 있다.
답) T

(4문1택)
WinUI3의 사용 예시들을 적어 놓은 문서의 이름은?
1)MFC gallery 2)Win2d gallery 3)WinUI3 gallery 4)microsoft gallery
답) 3

(칸 메우기)
<StackPanel Orientation="Vertical" HorizontalAlignment="Center" VerticalAlignment="Center">
<TextBox x:Name="va"/>
<TextBox x:Name="vb"/>
<Button x:Name="plus" Click="myButton_Click">+</Button>
<TextBox x:Name="vc"/>
</StackPanel>

위와 같은 계산기 구현을 위한 xaml코드가 있다 여기서 4번째줄의 Click=”myButton_Click”의 역할(또는 명칭)은 ______이다.
답) 이벤트 처리기
```

#### 우제현

```
(T/F)
StackPanel의 Orientation 속성을 Horizontal로 지정하면 StackPanel 내부의 기능들이 수직으로 배열된다.
답: F (Horizontal은 수평으로 배열된다.)

(4문1택)
슬라이더를 넣기 위한 자말코드로 올바른 것은?
1) <Slider /> 2) {Slider /} 3) [Slider /] 4) (Slider /)
답: 1)

(칸 메우기) 빈칸에 해당하는 부분은 [#] 으로 적어 주세요.)
TextBox에 Hello을 넣기 위해 코드를 완성하시오
<TextBox [#]="Hello" />
답: Text
```

#### 이수용

```
(T/F)
Button의 이름은 v:Name=""를 통해서 정할 수 있다.
답: F

(4문1택)
페이지 전환 효과가 아닌 것은?
1) Entrance 2) DrillIn 3) Next 4) Suppress
답: 3

(칸 메우기)
프로그램 실행 시 윈도우 창 크기를 조절하는 함수는 [#]이다.
답: SetWindowPos()
```

#### 김기종

```
(T/F)
펜 제작에서 캔버스 사용을 위해 아래를 선언해 주어야한다
#include <winrt/Microsoft.Graphics.Canvas.UI.Xaml.h>
답: T

(4문1택)
TimePicker에서 시간 분 am/pm이 나오게 만드는 방법?
<TimePicker ClockIdentifier="[ ??? ]" Header="[ ??? ]" />
1)24HourClock 2)12HoursClock 3)TimeClock
답: 1

(칸 메우기)
WinUI 3에서 Win2D를 활용하여 펜을 제작 시 빈칸을 채우시오
xmlns:canvas="using:Microsoft.[ ].[ ].[ ].Xaml"
답: Graphics.Canvas.UI.
```

#### 전성민

```
(T/F)
Nuget은 최신 개발 플랫폼의 필수 도구는 개발자가 유용한 코드를 생성, 공유 및 사용할 수 있는 메커니즘이다.
답: T

(4문1택)
마이크로소프트사가 구조값과 객체를 초기화하는 데 사용하려고 만든 선언형 XML 기반 언어는 ?
1) Xaml 2) C++ 3) C 4) PHP
답: 3

(칸 메우기)
Win2D Nuget Pakage를 설치한후 펜을 만들기 위해서 Xaml에 들어갈 코드는 ?
xmlns:canvas="using:Microsoft.[#]"
답: Graphics.Canvas.UI.Xaml
```

#### 임지훈

```
(T/F)
std::vector 를 활용하여 x, y 지점을 저장할 수 있다.
답: T

(4문1택)
Point가 Up이 될 때 지금까지 저장된 포인터의 개술르 제목창에 나타내려면
this->Title(to_hstring([#])); 이다.
1) vx.size() 2) vx.length() 3) vx.width() 3 4) vx.height
답: 1)

(칸 메우기) 빈칸에 해당하는 부분은 [#] 으로 적어 주세요.)
HorizontalAlignment="[#]" 을 사용하면 개체 또는 텍스트가 컨트롤 요소의 왼쪽에 맞춰집니다.
답: Left
```

#### 김현빈

```
(T/F)
툴팁을 사용하려면 해당 기능을 구현한 후 바로 뒷 부분에 ToolTipService.ToolTip="툴팁 내용" 을 입력하면 된다.
답: T

(4문1택)
메뉴 중 세부 메뉴를 만들기 위해 필요한 것은?
1) SubMItem 2) MenuFlyoutItem 3) MenuMiniItem 4) LowerMenuItem
답: 2)

(칸 메우기)
ANU.txt 파일을 읽어올 수 있도록 하시오.
fp = [#]("ANU.txt", "[#]");
답: fopen, r
```

#### 김기현

```
(T/F)
Grid를 사용하여 열과 행으로 구성된 레이아웃을 디자인할 수 있다.
답: T

(4문1택)
VerticalAlignment에 필드 요소로 부모 레이아웃 슬롯의 가운데를 맞춰주는 필드는?
1)Bottom 2)Center 3)Stretch 4)Top
답: 2)

(칸 메우기)
슬라이더를 통해 펜 사이즈를 변경하려고 할 때, Slider_ValueChanged 이벤트 처리기 안에 들어갈 코드는 mySize = e.[#]();다.
답: NewValue
```

#### 장지현

```
(T/F)
Grid태그 밖의 컨트롤등의 태그에서는 Grid.Row나 Grid.Column으로 위치를 조정할 수 있다.
답: F

(4문1택)
수직으로 정렬할 때 Orientiation에 들어갈 것은?
1)Vertical 2)Horizontal 3)Vertically 4)Horizontally
답: 1)

(칸 메우기)
수평으로 정렬할 때 Orientation="[#]"에 들어갈 말은?
답: Horizontal
```

#### 조은경

```
(T/F)
WinUI 3는 windows가 탑재된 모든 기기에서 작동이 가능하다.
답: T

(4문1택)
자말 코드의 주석처리로 올바른 것은?
1) <!-- 주석내용 --> 2) //주석내용 3) <@-- 주석내용 --> 4) #주석내용
답: 1

(칸 메우기)
vc라는 이름의 텍스트 박스의 텍스트 내용을 "안동대"로 바꾸는 코드는 vc().[#];이다.
답: Text("안동대")
```

#### 백동섭

```
(T/F)
MFC와 WinUI3는 Windows 모든 기기에서 작동한다.
답: F (MFC는 Windows PC에서만 작동한다.)

(4문1택)
Draw 이벤트를 통해 마우스가 이동 될 때 선을 그어주는 이벤트로 알맞은것은?
1)PointerPressed 2)PointerReleased 3)PointerMoved 4)PointerEntered
답: 3)

(칸 메우기) 빈칸에 해당하는 부분은 [#] 으로 적어 주세요.)
WinUI3 Gallery는 [#]에서 다운받아 설치가 가능하다.
답: Microsoft Store
```

#### 김선희

```
(T/F)
winui 3 gallery는 Windows 앱 SDK로 WinUI 3 앱을 만드는 데 사용할 수 있는 모든 Windows UI 3 라이브러리 컨트롤 및 스타일을 보여줍니다.
답 : T

(4문1택)
Grid에 대한 설명으로 옳지 않은 것은?
1 행의 높이와 열의 너비를 설정하려면 각 RowDefinition 에 대해 RowDefinition.Height 를 설정 하고 각 ColumnDefinition 에 대해 ColumnDefinition.Width 를 설정합니다.
2 열과 행으로 구성된 유연한 영역을 정의합니다.
3 자식 요소를 가로 또는 세로 방향으로 지정할 수 있는 한 줄로 정렬하는 레이아웃 패널입니다.
4 자식 요소는 행/열 할당 및 기타 논리에 따라 측정되고 정렬됩니다 .
답 : 3

(칸 메우기)
[#] 이벤트는 포인터 디바이스가 이 요소 내에서 Press 동작을 시작할 때 발생하고, [#] 이벤트는 이전에 Press 동작을 시작한 포인터 디바이스가 해제될 때 발생됩니다.
답 : PointerPressed, PointerReleased
```

#### 유채린

```
(T/F)
비쥬얼 스튜디오의 깃리포지토리만들기에서 내가 작성한 코드를 깃허브에 올릴 수 있다.
답: T

(4문 1택)
펜 만들기에서 이동이 될 때 선을 그어주는 함수는 무엇인가?
1. PointerReleased 2. CanvasControl_Draw 3.Pointermoved 4.PointerMoved
답: 4

(칸 메우기)
다음 빈칸에 버튼 클릭시 화면이 초기화되는 코드를 작성하시오.
CanvasControl canvas = sender.as<CanvasControl>();
int n = vx.size();
for (int i = 1; i < n; i++) {
if (vx[i] == 0 && vy[i] == 0) {
i++; continue;
}
args.DrawingSession().DrawLine(vx[i - 1], vy[i - 1], vx[i], vy[i], col[i], size[i]);
args.DrawingSession().FillCircle(vx[i - 1], vy[i - 1], size[i] /2, col[i]);
args.DrawingSession().FillCircle(vx[i], vy[i], size[i] /2, col[i]);
}
[ # ]
}
답: canvas.Invalidate();
```
