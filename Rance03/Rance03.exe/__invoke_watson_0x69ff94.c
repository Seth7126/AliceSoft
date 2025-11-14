// 函数: __invoke_watson
// 地址: 0x69ff94
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

__call_reportfault(2, 0xc0000417, 1)
sub_69fabe(0xc0000417)
noreturn
