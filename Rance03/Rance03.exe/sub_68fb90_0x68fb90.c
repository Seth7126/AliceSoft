// 函数: sub_68fb90
// 地址: 0x68fb90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp_1 = arg6
void* var_c = arg3
void* esi_1

if (arg3 == arg2)
    esi_1 = arg4
else
    arg1 = arg4
    void* var_10_1 = arg1
    
    if (arg1 == arg5)
        esi_1 = arg1
    else
        int32_t* esi = arg3 + 0xc
        int32_t* edi_1 = arg1 + 0x1c
        bool cond:4_1
        
        do
            int32_t ecx = esi[4]
            int32_t* edx_1
            
            if (esi[5] u< 0x10)
                edx_1 = esi
            else
                edx_1 = *esi
            
            int32_t ebx_1 = *edi_1
            int32_t* eax
            
            if (edi_1[1] u< 0x10)
                eax = &edi_1[-4]
            else
                eax = edi_1[-4]
            
            int32_t eax_1 = ecx
            
            if (ebx_1 u< ecx)
                eax_1 = ebx_1
            
            int32_t eax_2 = sub_405190(eax_1, edx_1, eax, eax_1)
            bool cond:2_1 = eax_2 s< 0
            
            if (eax_2 != 0)
                goto label_68fc14
            
            int32_t ecx_2 = esi[4]
            
            if (ebx_1 u< ecx_2)
            label_68fcaf:
                eax_2.b = edi_1[-6].b
                void* ebx_3 = ebp_1
                ebp_1 += 0x44
                *(ebx_3 + 4) = eax_2.b
                *(ebx_3 + 8) = edi_1[-5]
                
                if (ebx_3 + 0xc != &edi_1[-4])
                    sub_401ff0(ebx_3 + 0xc, &edi_1[-4], 0, 0xffffffff)
                
                *(ebx_3 + 0x24) = edi_1[2]
                sub_4a6db0(ebx_3 + 0x28, &edi_1[3])
                *(ebx_3 + 0x34) = edi_1[6].b
                *(ebx_3 + 0x38) = edi_1[7]
                *(ebx_3 + 0x3c) = edi_1[8]
                int32_t eax_19 = edi_1[9]
                edi_1 = &edi_1[0x11]
                *(ebx_3 + 0x40) = eax_19
                arg1 = var_10_1 + 0x44
                cond:4_1 = arg1 != arg5
                var_10_1 = arg1
            else
                eax_2.b = ebx_1 != ecx_2
                cond:2_1 = eax_2 s< 0
            label_68fc14:
                
                if (cond:2_1)
                    goto label_68fcaf
                
                eax_2.b = esi[-2].b
                void* ebx_2 = ebp_1
                ebp_1 += 0x44
                *(ebx_2 + 4) = eax_2.b
                *(ebx_2 + 8) = esi[-1]
                
                if (ebx_2 + 0xc != esi)
                    sub_401ff0(ebx_2 + 0xc, esi, 0, 0xffffffff)
                
                *(ebx_2 + 0x24) = esi[6]
                sub_4a6db0(ebx_2 + 0x28, &esi[7])
                *(ebx_2 + 0x34) = esi[0xa].b
                *(ebx_2 + 0x38) = esi[0xb]
                *(ebx_2 + 0x3c) = esi[0xc]
                arg1 = esi[0xd]
                esi = &esi[0x11]
                cond:4_1 = var_c + 0x44 != arg2
                *(ebx_2 + 0x40) = arg1
                var_c += 0x44
        while (cond:4_1)
        esi_1 = var_10_1

int32_t __saved_edi = arg2
void* eax_9 = sub_68cec0(arg1, arg2, var_c, ebp_1)
int32_t var_24_3 = arg2
return sub_68cec0(eax_9, arg5, esi_1, eax_9)
