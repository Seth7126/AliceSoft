// 函数: sub_511420
// 地址: 0x511420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float edi = *(arg1 + 0x18)

if (*(arg1 + 0x1c) != 0 && (*(**(*(arg1 + 0x28) + (edi << 2)) + 0x3c))() == 0)
    if (edi != 3)
        edi = 1.40129846e-45f
    else
        edi = 2.80259693e-45f
        
        if ((*(**(*(arg1 + 0x28) + 8) + 0x3c))() == 0)
            edi = 1.40129846e-45f

char eax_9
int32_t edx
eax_9, edx = sub_4a26a0(arg4, arg2)
arg2.b = eax_9

for (int32_t i = 1; i s< 4; i += 1)
    if (edi != i || eax_9 == 0)
        edx.b = 0
    else
        edx.b = 1
    
    (*(**(*(arg1 + 0x28) + (i << 2)) + 0x20))(edx)
    eax_9 = arg2.b

if (eax_9 == 0)
    if (arg3 == eax_9)
        int32_t eax_14
        
        for (int32_t* i_1 = 4; i_1 s< 0x10; i_1 = &i_1[1])
            eax_14 = (*(**(i_1 + *(arg1 + 0x28)) + 0x14))()
        
        return eax_14
    
    sub_511590(arg1, 1.40129846e-45f, arg4)
else if (arg3 != 0)
    sub_511590(arg1, 1.40129846e-45f, arg4)

if (*(arg1 + 0x14) != 0)
    sub_511590(arg1, edi, arg4)
else
    float ecx_6
    
    if (*(arg1 + 0x1c) != 0)
        if ((*(**(*(arg1 + 0x28) + (edi << 2)) + 0x3c))() == 0)
            char eax_22
            
            if (edi == 3)
                eax_22 = (*(**(*(arg1 + 0x28) + 8) + 0x3c))()
                ecx_6 = edi - 1
            
            if (edi != 3 || eax_22 == 0)
                ecx_6 = 1.40129846e-45f
        else
            ecx_6 = edi
    else
        ecx_6 = edi
    
    if ((*(**(*(arg1 + 0x28) + (ecx_6 << 2)) + 0x10))() != 0)
        sub_511590(arg1, edi, arg4)
    else
        int32_t eax_29 = *(*(*(arg4 i+ 0x50) + 0x58) + 0x90)
        void* eax_30
        
        if (eax_29 s> 0)
            int32_t var_14_3 = eax_29
            eax_30 = sub_4a56f0(*(arg4 i+ 0x54))
        else
            eax_30 = nullptr
        
        if (*(arg4 i+ 0x70) != 0)
            sub_511590(arg1, edi, arg4)
        else if (eax_30 != 0 && sub_4a1ab0(eax_30) != 0)
            sub_511590(arg1, edi, arg4)

int32_t eax_34

for (int32_t* i_2 = 4; i_2 s< 0x10; i_2 = &i_2[1])
    eax_34 = (*(**(i_2 + *(arg1 + 0x28)) + 0x14))()

return eax_34
