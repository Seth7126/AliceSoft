// 函数: _abort
// 地址: 0x70c014
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx

if (___acrt_get_sigabrt_handler(ecx) != 0)
    _raise(0x16)

if ((data_7e14e0 & 2) != 0)
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    sub_7034cc(3, 0x40000015, 1)

sub_7069cc(3)
breakpoint
