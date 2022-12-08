## WinUI 3 Gallery 한 개 구현

### 1. MainWindow.xaml 코드 중 ListBox 부분

```xaml
<Grid Grid.Row="1" Background="Gainsboro" CornerRadius="8">
	<StackPanel Padding="10" HorizontalAlignment="Left" VerticalAlignment="Center">
		<!-- 리스트박스 -->
		<ListBox x:Name="lb1" Width="200" SelectionChanged="ListBox_SelectionChanged">
			<ListBoxItem>Blue</ListBoxItem>
			<ListBoxItem>Green</ListBoxItem>
			<ListBoxItem>Red</ListBoxItem>
			<ListBoxItem>Yellow</ListBoxItem>
		</ListBox>

		<!-- 색깔 사각형-->
		<Rectangle x:Name="Control1Output" Height="30" Width="100" Margin="0,10,0,0" HorizontalAlignment="Center" />

	</StackPanel>
</Grid>
```

### 2. MainWindow.xaml.cpp 코드 중 SelectionChanged 함수

```cpp
void MainWindow::ListBox_SelectionChanged(IInspectable const& /*sender*/, SelectionChangedEventArgs const& /*e*/)
{
	switch (lb1().SelectedIndex())
	{
		case 0:
		Control1Output().Fill(SolidColorBrush(Colors::Blue()));
		break;

		case 1:
		Control1Output().Fill(SolidColorBrush(Colors::Green()));
		break;

		case 2:
		Control1Output().Fill(SolidColorBrush(Colors::Red()));
		break;

		case 3:
		Control1Output().Fill(SolidColorBrush(Colors::Yellow()));
		break;
	}
}
```

### 3. 실행결과

[![1](http://img.youtube.com/vi/oQnX24UMQAA/0.jpg)](https://youtu.be/oQnX24UMQAA?t=0s)

▲ 이미지 클릭
