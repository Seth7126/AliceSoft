// 函数: _abort
// 地址: 0x69c173
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_6a635f() != 0)
    sub_6a6388(0x16)

if ((data_74a170 & 2) != 0)
    if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
        trap(0xd)
    
    __call_reportfault(3, 0x40000015, 1)

__exit(3)
noreturn
