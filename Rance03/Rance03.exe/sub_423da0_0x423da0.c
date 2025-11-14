// 函数: sub_423da0
// 地址: 0x423da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax
int32_t edx_2
edx_2:eax = muls.dp.d(0x38e38e39, arg1[0x46] - arg1[0x45])
int32_t edx_3 = edx_2 s>> 3

if ((edx_3 u>> 0x1f) + edx_3 u> 1)
    int32_t eax_4
    int32_t edx_4
    edx_4:eax_4 = muls.dp.d(0x38e38e39, arg1[0x46] - arg1[0x45])
    int32_t edx_5 = edx_4 s>> 3
    
    if ((*(**(arg1[0x38] + 8) + 0x14))(*(arg1[0x45] + ((edx_5 u>> 0x1f) + edx_5 - 2) * 0x24)) == 3)
        void* edi = arg1[0x46]
        
        if (*(edi - 4) u>= 0x10)
            j__free(*(edi - 0x18))
        
        *(edi - 4) = 0xf
        *(edi - 8) = 0
        *(edi - 0x18) = 0
        arg1[0x46] -= 0x24
        int32_t edi_1 = *(arg1[0x46] - 0x20)
        
        if ((*(*arg1 + 0x9c))(arg2 + edi_1) == 0)
            (*(*arg1 + 0x9c))(edi_1)
        
        sub_4315f0(arg1)
        BOOL eax_17
        eax_17.b = 1
        return eax_17

int32_t eax_3
eax_3.b = 0
return eax_3
