// 函数: sub_43a800
// 地址: 0x43a800
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x66666667, *(arg1 + 0x30) - *(arg1 + 0x2c))
int32_t edx_3 = edx_2 s>> 4
int32_t eax_3

if ((edx_3 u>> 0x1f) + edx_3 == 1)
    if (sub_439dd0(arg1) == 5)
        return sub_43a310(arg2, arg3, *(arg1 + 0x2c) + 8)
    
    eax_3 = sub_439dd0(arg1)
    
    if (eax_3 == 5)
        eax_3 = sub_439e70(arg1, *(arg1 + 0x2c) + 8, arg3)
    
    if (eax_3 == 4)
        int32_t* eax_11 = *(arg1 + 0x2c) + 8
        
        if (arg2 != eax_11)
            sub_401ff0(arg2, eax_11, 0, 0xffffffff)
        
        eax_11.b = 1
        return eax_11

eax_3.b = 0
return eax_3
