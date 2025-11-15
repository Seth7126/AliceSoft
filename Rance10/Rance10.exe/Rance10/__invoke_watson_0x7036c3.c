// 函数: __invoke_watson
// 地址: 0x7036c3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (IsProcessorFeaturePresent(0x17) != 0)
    trap(0xd)

sub_7034cc(2, 0xc0000417, 1)
TerminateProcess(GetCurrentProcess(), 0xc0000417)
noreturn
