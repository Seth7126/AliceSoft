// 函数: sub_652630
// 地址: 0x652630
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ecx = __chkstk(0x4004)
int32_t eax_1 = __security_cookie ^ &__return_addr
void* esi = ecx
void* const* edi = &__return_addr
char i
void* edx
i, edx = sub_652590(ecx)

if (i != 0)
    char* ebx_1 = *(esi + 0x10)
    ecx.b = *ebx_1
    void* const* ecx_2
    
    if ((ecx.b u< 0x61 || ecx.b u> 0x7a) && (ecx.b u< 0x41 || ecx.b u> 0x5a))
        if (ecx.b u< 0x30)
            if (ecx.b != 0x2d)
                goto label_65277b
            
            goto label_6526ef
        
        if (ecx.b u<= 0x39 || ecx.b == 0x2d)
        label_6526ef:
            int32_t edi_2 = *(esi + 0x14)
            void* eax_2 = &ebx_1[1]
            ebx_1.b = 0
            __return_addr.b = ecx.b
            *(esi + 0x10) = eax_2
            char* ecx_3 = &__return_addr:1
            
            while (eax_2 u< edi_2)
                edx.b = *eax_2
                
                if (edx.b u< 0x30 || edx.b u> 0x39)
                    if (edx.b != 0x2e)
                        break
                    
                    if (ebx_1.b != 0)
                        break
                    
                    *ecx_3 = edx.b
                    ebx_1.b = 1
                else
                    *ecx_3 = edx.b
                
                eax_2 += 1
                ecx_3 = &ecx_3[1]
                *(esi + 0x10) = eax_2
            
            *ecx_3 = 0
            
            if (__return_addr.b != 0)
                ecx_2 = &__return_addr
                
                do
                    eax_2.b = *ecx_2
                    ecx_2 += 1
                while (eax_2.b != 0)
                
                sub_402110(arg1, &__return_addr, ecx_2 - &__return_addr:1)
                i = 1
            else
                sub_402110(arg1, &__return_addr, nullptr)
                i = 1
        else
        label_65277b:
            char* var_14_2
            
            if (sx.d(ecx.b) - 0x22 u> 0x5b)
            label_652810:
                var_14_2 = &data_6da813
            label_652817:
                sub_402670(arg1, var_14_2)
                i = 0
                *(esi + 0x18) = 1
            else
                switch (ecx.b)
                    case 0x22
                        int32_t edx_2 = *(esi + 0x14)
                        void* ecx_7 = &ebx_1[1]
                        *(esi + 0x10) = ecx_7
                        
                        if (ecx_7 u>= edx_2)
                        label_6527d1:
                            var_14_2 = &data_6da812
                            goto label_652817
                        
                        while (true)
                            uint32_t eax_5
                            eax_5.b = *ecx_7
                            
                            if (eax_5.b == 0x22)
                                *edi = nullptr
                                *(esi + 0x10) = ecx_7 + 1
                                sub_402670(arg1, &__return_addr)
                                i = 1
                                break
                            
                            if ((eax_5.b u< 0x81 || eax_5.b u> 0x9f)
                                    && (eax_5.b u< 0xe0 || eax_5.b u> 0xef))
                                *edi = eax_5.b
                                edi += 1
                            else
                                ecx_7 += 1
                                *edi = eax_5.b
                                *(esi + 0x10) = ecx_7
                                eax_5.b = *ecx_7
                                *(edi + 1) = eax_5.b
                                edi += 2
                            
                            ecx_7 += 1
                            *(esi + 0x10) = ecx_7
                            
                            if (ecx_7 u>= edx_2)
                                goto label_6527d1
                    case 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2e, 0x2f, 0x30, 
                            0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 
                            0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 
                            0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 
                            0x56, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 
                            0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 
                            0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                        goto label_652810
                    case 0x2c, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                        __return_addr.b = ecx.b
                        *(esi + 0x10) = &ebx_1[1]
                        __return_addr:1.b = 0
                        sub_402670(arg1, &__return_addr)
                        i = 1
    else
        int32_t edi_1 = *(esi + 0x14)
        void* edx_1 = &__return_addr:1
        __return_addr.b = ecx.b
        void* ecx_1 = &ebx_1[1]
        *(esi + 0x10) = ecx_1
        
        while (ecx_1 u< edi_1)
            i = *ecx_1
            
            if ((i u< 0x61 || i u> 0x7a) && (i u< 0x41 || i u> 0x5a))
                if (i u< 0x30)
                    break
                
                if (i u> 0x39)
                    break
            
            ecx_1 += 1
            *edx_1 = i
            edx_1 += 1
            *(esi + 0x10) = ecx_1
        
        *edx_1 = 0
        
        if (__return_addr.b == 0)
            sub_402110(arg1, &__return_addr, nullptr)
            i = 1
        else
            ecx_2 = &__return_addr
            
            do
                i = *ecx_2
                ecx_2 += 1
            while (i != 0)
            
            sub_402110(arg1, &__return_addr, ecx_2 - &__return_addr:1)
            i = 1

sub_69a5bc(eax_1 ^ &__return_addr)
return i
