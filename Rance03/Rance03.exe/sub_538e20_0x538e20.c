// 函数: sub_538e20
// 地址: 0x538e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_1c = arg1 + 0x40
void* ebx = arg1 + 4
int32_t i_1 = 3
int32_t result
int32_t i

do
    void** edi_1 = *(arg2 + 0x10)
    void** esi_1 = edi_1[1]
    
    while (*(esi_1 + 0xd) == 0)
        if (sub_59e060(&esi_1[4], ebx) == 0)
            edi_1 = esi_1
            esi_1 = *esi_1
        else
            esi_1 = esi_1[2]
    
    void*** eax_4
    void** var_10
    
    if (edi_1 == *(arg2 + 0x10))
        var_10 = *(arg2 + 0x10)
        eax_4 = &var_10
    else if (sub_59e060(ebx, &edi_1[4]) != 0)
        var_10 = *(arg2 + 0x10)
        eax_4 = &var_10
    else
        void** var_14 = edi_1
        eax_4 = &var_14
    void** eax_6 = *eax_4
    
    if (eax_6 == *(arg2 + 0x10))
        int32_t eax_7
        int32_t edx_3
        edx_3:eax_7 = muls.dp.d(0x66666667, *(arg2 + 8) - *(arg2 + 4))
        int32_t edx_4 = edx_3 s>> 3
        int32_t* ecx_5 = sub_59e820(arg2 + 4, ebx)
        void** esi_2 = *(arg2 + 0x10)
        void** edi_2 = esi_2[1]
        
        while (*(edi_2 + 0xd) == 0)
            char eax_11
            eax_11, ecx_5 = sub_59e060(&edi_2[4], ebx)
            
            if (eax_11 == 0)
                esi_2 = edi_2
                edi_2 = *edi_2
            else
                edi_2 = edi_2[2]
        
        if (esi_2 == *(arg2 + 0x10))
        label_538f05:
            int32_t* var_30_6 = ecx_5
            void* var_c = ebx
            void** var_34_1 = &var_c
            int32_t* eax_14 = sub_59ee20(ecx_5)
            void** var_8
            sub_59eed0(arg2 + 0x10, &var_8, esi_2, &eax_14[4], eax_14)
            esi_2 = var_8
        else
            char eax_13
            eax_13, ecx_5 = sub_59e060(ebx, &esi_2[4])
            
            if (eax_13 != 0)
                goto label_538f05
        
        result = (edx_4 u>> 0x1f) + edx_4
        esi_2[9] = result
    else
        result = eax_6[9]
    
    int32_t* edx_5 = var_1c
    ebx += 0x14
    *edx_5 = result
    i = i_1
    i_1 -= 1
    var_1c = &edx_5[1]
while (i != 1)
return result
