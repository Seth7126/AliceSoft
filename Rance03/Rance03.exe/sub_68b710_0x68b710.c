// 函数: sub_68b710
// 地址: 0x68b710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
uint32_t ebx = zx.d(arg3.w)
int32_t edi_2 = (arg3 u>> 0x10) - *(arg1 + 0x2c)

if (ebx s> 0 && edi_2 s> 0)
    *(arg1 + 0x34)
    *(arg1 + 0x25c) = divs.dp.d(sx.q(edi_2), *(arg1 + 0x34))
    sub_689120(arg1 + 0x248)
    *(arg1 + 0x27c) = ebx
    sub_689120(arg1 + 0x268)
    
    if (sub_601bb0(arg1 + 0x318, arg2, ebx, edi_2) != 0
            && sub_686ca0(arg1 + 0x298, arg2, ebx, *(arg1 + 0x2c)) != 0)
        sub_68c050(arg1)
        return 0
    
    *(arg1 + 0x3ac) = 1

return 0
