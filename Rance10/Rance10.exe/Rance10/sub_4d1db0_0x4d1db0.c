// 函数: sub_4d1db0
// 地址: 0x4d1db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0 || arg3 == 0)
    return 

sub_4d1c50(arg1)
*(arg1 + 0xc) = arg2
(**arg2)()
*(arg1 + 0x10) = arg3
(**arg3)()
int32_t ebx_2 = arg3[0xd]

if ((*(arg1 + 0x12c) - *(arg1 + 0x124)) s>> 2 u< ebx_2)
    if (ebx_2 u> 0x3fffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    sub_404670(arg1 + 0x124, ebx_2)

*(arg1 + 0x114) = ebx_2
*(arg1 + 8) = arg2[0xc]
