// 函数: sub_10010810
// 地址: 0x10010810
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ebp = 0

if (arg3 == 0)
    return 0x80004003

if (arg4 != 0)
    *arg4 = 0
else if (arg2 u> 1)
    return 0x80070057

if ((*(**(arg1 + 0xc) + 0x14))() != *(arg1 + 0x10))
    int32_t eax_5 = (*(**(arg1 + 0xc) + 0x14))()
    int32_t* ecx_2 = *(arg1 + 0xc)
    *(arg1 + 0x10) = eax_5
    *(arg1 + 8) = (*(*ecx_2 + 0x18))()
    *(arg1 + 4) = 0

if (arg2 u> 0)
    do
        int32_t eax_8 = *(arg1 + 4)
        
        if (*(arg1 + 8) s<= eax_8)
            break
        
        *(arg1 + 4) = eax_8 + 1
        void* eax_10 = (*(**(arg1 + 0xc) + 0x1c))(eax_8)
        
        if (eax_10 == 0)
            return 0x80040203
        
        if (sub_100126c0(arg1 + 0x18, eax_10) == 0)
            *arg3 = eax_10 + 0xc
            (*(*(eax_10 + 0xc) + 4))(eax_10 + 0xc)
            arg3 = &arg3[1]
            ebp += 1
            sub_100126f0(arg1 + 0x18, eax_10)
    while (ebp u< arg2)

if (arg4 != 0)
    *arg4 = ebp

int32_t result
result.b = arg2 != ebp
return result
