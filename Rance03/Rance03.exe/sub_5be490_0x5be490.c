// 函数: sub_5be490
// 地址: 0x5be490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1 + 0x78
char eax = sub_5db5c0(esi, arg2)

if (eax == 0)
    return eax

int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2e8ba2e9, esi[1] - *esi)
int32_t i_1 = 0
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    void* ebx_1 = arg1 + 0xd4
    int32_t* ebp_1 = nullptr
    void* var_10_1 = ebx_1
    arg2 = nullptr
    int32_t edx_4
    int32_t i
    
    do
        int32_t* edi_2 = *esi + ebp_1
        void** eax_5
        int32_t* ecx_4
        eax_5, ecx_4 = sub_417ed0(ebx_1, edi_2)
        void** esi_1 = eax_5
        
        if (esi_1 == *ebx_1)
            goto label_5be552
        
        void* edx_2 = &esi_1[4]
        int32_t ebp_2 = *(edx_2 + 0x10)
        
        if (esi_1[9] u>= 0x10)
            edx_2 = *edx_2
        
        int32_t ebx_2 = edi_2[4]
        int32_t* ecx_5
        
        if (edi_2[5] u< 0x10)
            ecx_5 = edi_2
        else
            ecx_5 = *edi_2
        
        int32_t eax_6 = ebp_2
        
        if (ebx_2 u< ebp_2)
            eax_6 = ebx_2
        
        int32_t eax_7
        eax_7, ecx_4 = sub_405190(eax_6, edx_2, ecx_5, eax_6)
        bool cond:2_1 = eax_7 s>= 0
        
        if (eax_7 != 0)
            goto label_5be53e
        
        if (ebx_2 u< ebp_2)
            ebx_1 = var_10_1
            ebp_1 = arg2
        label_5be552:
            int32_t* var_24_3 = ecx_4
            arg2 = edi_2
            int32_t** var_28_1 = &arg2
            int32_t* eax_8 = sub_427ff0(ecx_4)
            void** var_8
            sub_4280a0(ebx_1, &var_8, esi_1, &eax_8[4], eax_8)
            esi_1 = var_8
        else
            eax_7.b = ebx_2 != ebp_2
            cond:2_1 = eax_7 s>= 0
        label_5be53e:
            ebx_1 = var_10_1
            ebp_1 = arg2
            
            if (not(cond:2_1))
                goto label_5be552
        
        esi_1[0xa] = i_1
        ebp_1 = &ebp_1[0xb]
        i = i_1 + 1
        esi = arg1 + 0x78
        i_1 = i
        arg2 = ebp_1
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = muls.dp.d(0x2e8ba2e9, esi[1] - *esi)
        edx_4 = edx_3 s>> 3
    while (i s< (edx_4 u>> 0x1f) + edx_4)

int32_t eax_4
eax_4.b = 1
return eax_4
