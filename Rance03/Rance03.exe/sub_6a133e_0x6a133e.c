// 函数: sub_6a133e
// 地址: 0x6a133e
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
uint32_t eax = __fileno(esi)
int32_t ecx = esi[3]

if ((ecx.b & 0x82) != 0)
    if ((ecx.b & 0x40) == 0)
        void* ebx_1 = nullptr
        
        if ((ecx.b & 1) == 0)
            goto label_6a139e
        
        esi[1] = 0
        
        if ((ecx.b & 0x10) == 0)
            esi[3] = ecx | 0x20
        else
            *esi = esi[2]
            esi[3] = ecx & 0xfffffffe
        label_6a139e:
            int32_t eax_6 = esi[3] & 0xffffffef
            esi[1] = 0
            int32_t eax_7 = eax_6 | 2
            esi[3] = eax_7
            
            if ((eax_7 & 0x10c) == 0)
                int32_t eax_8
                
                if (esi == 0x74a198 || esi == 0x74a1b8)
                    eax_8 = sub_6aa1a8(eax)
                
                if ((esi != 0x74a198 && esi != 0x74a1b8) || eax_8 == 0)
                    __getbuf(esi)
            
            int32_t arg_4
            
            if ((esi[3] & 0x108) == 0)
                arg1 = 1
                ebx_1 = sub_6a40fd(eax, &arg_4, 1)
            label_6a1474:
                
                if (ebx_1 == arg1)
                    return zx.d(arg_4.b)
            else
                char* edx_1 = esi[2]
                int32_t* ecx_5 = *esi - edx_1
                arg1 = ecx_5
                *esi = &edx_1[1]
                esi[1] = esi[6] - 1
                
                if (ecx_5 s> 0)
                    ebx_1 = sub_6a40fd(eax, edx_1, ecx_5)
                label_6a1457:
                    void* eax_11
                    eax_11.b = arg_4.b
                    *esi[2] = eax_11.b
                    goto label_6a1474
                
                void* ecx_10
                
                if (eax == 0xffffffff || eax == 0xfffffffe)
                    ecx_10 = &data_74a630
                else
                    ecx_10 = ((eax & 0x1f) << 6) + (&data_75ca40)[eax s>> 5]
                
                if ((*(ecx_10 + 4) & 0x20) == 0)
                    goto label_6a1457
                
                int32_t eax_13
                int32_t edx_2
                eax_13, edx_2 = __lseeki64(eax, 0, 0, FILE_END)
                
                if ((eax_13 & edx_2) != 0xffffffff)
                    goto label_6a1457
            esi[3] |= 0x20
        
        return 0xffffffff
    
    *__errno() = 0x22
else
    *__errno() = 9

esi[3] |= 0x20
return 0xffffffff
