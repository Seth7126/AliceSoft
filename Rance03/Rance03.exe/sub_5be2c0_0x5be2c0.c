// 函数: sub_5be2c0
// 地址: 0x5be2c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edx = *(arg2 + 4)

if (&edx[4] u> *(arg2 + 8))
    int32_t eax
    eax.b = 0
    return eax

uint32_t edi_6 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
*(arg2 + 4) = &edx[4]

if (edi_6 s> 0)
    int32_t* esi_1 = &arg1[0x15]
    sub_5b6720(esi_1, edi_6)
    int32_t ebx_1 = 0
    
    if (edi_6 s> 0)
        int32_t ebp_1 = 0
        
        do
            sub_5b6340(*esi_1 + ebp_1, arg2, ebx_1)
            int32_t* eax_7 = *esi_1 + 8 + ebp_1
            int32_t* var_10 = eax_7
            int32_t* ecx_6 = arg1
            void** esi_2 = sub_417ed0(&arg1[0x33], eax_7)
            
            if (esi_2 == ecx_6[0x33])
                goto label_5be378
            
            if (sub_40c3a0(var_10, &esi_2[4]) != 0)
                ecx_6 = arg1
            label_5be378:
                int32_t* var_2c_5 = ecx_6
                var_10 = var_10
                int32_t** var_30_3 = &var_10
                int32_t* eax_12 = sub_427ff0(ecx_6)
                void** var_c
                sub_4280a0(&arg1[0x33], &var_c, esi_2, &eax_12[4], eax_12)
                esi_2 = var_c
            
            esi_2[0xa] = ebx_1
            esi_1 = &arg1[0x15]
            int32_t var_8 = *(*esi_1 + ebp_1 + 4)
            ebp_1 += 0x48
            *sub_42f350(&arg1[0x37], &var_8) = ebx_1
            ebx_1 += 1
        while (ebx_1 s< edi_6)

uint32_t eax_3
eax_3.b = 1
return eax_3
