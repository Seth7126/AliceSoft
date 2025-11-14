// 函数: sub_59ce30
// 地址: 0x59ce30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* ecx = __chkstk(0x4008)
int32_t arg_4004 = __security_cookie ^ &__return_addr
char* edx = ecx
void* ebx
void* var_4 = ebx
int32_t ebp
int32_t var_8 = ebp
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* esp = &var_10
int32_t edi_1 = *(edx + 0xc)
char arg_4
char* esi_1 = &arg_4
__return_addr = arg1
char* i = *(edx + 4)
*(edx + 8) = i

for (; i u< edi_1; i = *(edx + 4))
    ecx.b = *i
    
    if (ecx.b u<= 0x20 || ecx.b == 0x7f)
        *(edx + 4) = &i[1]
    else
        if (&i[1] u>= edi_1)
            break
        
        if (ecx.b != 0x2f)
            break
        
        if (i[1] != ecx.b)
            break
        
        *(edx + 4) = &i[2]
        
        if (&i[2] u< edi_1)
            while (true)
                ecx = *(edx + 4)
                i.b = *ecx
                
                if ((i.b u< 0x81 || i.b u> 0x9f) && (i.b u< 0xe0 || i.b u> 0xef))
                    if (i.b == 0xa)
                        *(edx + 4) += 1
                        break
                    
                    i = &ecx[1]
                else
                    i = &ecx[2]
                
                *(edx + 4) = i
                
                if (i u>= edi_1)
                    goto label_59ced1

label_59ced1:
char* i_1 = *(edx + 4)

if (i_1 u< edi_1)
    ebx.b = *i_1
    int32_t* __return_addr_1
    char arg_5
    
    if ((ebx.b u>= 0x61 && ebx.b u<= 0x7a) || (ebx.b u>= 0x41 && ebx.b u<= 0x5a)
            || (ebx.b u>= 0x81 && ebx.b u<= 0x9f) || (ebx.b u>= 0xe0 && ebx.b u<= 0xef))
        do
            i.b = *i_1
            
            if ((i.b u< 0x61 || i.b u> 0x7a) && (i.b u< 0x41 || i.b u> 0x5a)
                    && (i.b u< 0x30 || i.b u> 0x39))
                if (i.b u< 0x81 || i.b u> 0x9f)
                    if (i.b u< 0xe0)
                        break
                    
                    if (i.b u> 0xef)
                        break
                
                i_1 = &i_1[1]
                *esi_1 = i.b
                *(edx + 4) = i_1
                i.b = *i_1
                esi_1[1] = i.b
                esi_1 = &esi_1[2]
            else
                *esi_1 = i.b
                esi_1 = &esi_1[1]
            
            i = &i_1[1]
            i_1 = i
            *(edx + 4) = i
        while (i_1 u< edi_1)
        
        *esi_1 = 0
        void* ecx_1
        
        if (arg_4 != 0)
            char* ecx_2 = &arg_4
            
            do
                i.b = *ecx_2
                ecx_2 = &ecx_2[1]
            while (i.b != 0)
            
            ecx_1 = ecx_2 - &arg_5
        else
            ecx_1 = nullptr
        
        void* const __return_addr_2 = __return_addr
        __return_addr_1 = &arg_4
        sub_402110(__return_addr_2, __return_addr_1, ecx_1)
        esp = &var_10
        *arg2 = 4
        i.b = 1
    else if ((ebx.b u>= 0x30 && ebx.b u<= 0x39) || ebx.b == 0x2d)
        void* ecx_3 = &i_1[1]
        arg_4 = ebx.b
        ebx:1.b = 0
        *(edx + 4) = ecx_3
        char* eax_4 = &arg_5
        
        while (ecx_3 u< edi_1)
            ebx.b = *ecx_3
            
            if (ebx.b u< 0x30 || ebx.b u> 0x39)
                if (ebx.b != 0x2e)
                    break
                
                if (ebx:1.b != 0)
                    break
                
                *eax_4 = ebx.b
                ebx:1.b = 1
            else
                *eax_4 = ebx.b
            
            ecx_3 += 1
            eax_4 = &eax_4[1]
            *(edx + 4) = ecx_3
        
        void* const __return_addr_3 = __return_addr
        *eax_4 = 0
        sub_402670(__return_addr_3, &arg_4)
        esp = &var_10
        void* eax_5
        eax_5.b = ebx:1.b != 0
        *arg2 = eax_5 + 2
        i.b = 1
    else if (sx.d(ebx.b) - 0x22 u> 0x5b)
    label_59d04a:
        *arg2 = 0
        i.b = 0
    else
        switch (ebx.b)
            case 0x22
                char* ecx_7 = &i_1[1]
                *(edx + 4) = ecx_7
                
                if (ecx_7 u>= edi_1)
                    goto label_59d04a
                
                while (true)
                    i.b = *ecx_7
                    
                    if (i.b == 0x22)
                        *esi_1 = 0
                        void* const __return_addr_4 = __return_addr
                        *(edx + 4) = &ecx_7[1]
                        sub_402670(__return_addr_4, &arg_4)
                        esp = &var_10
                        *arg2 = 5
                        i.b = 1
                        break
                    
                    if ((i.b u< 0x81 || i.b u> 0x9f) && (i.b u< 0xe0 || i.b u> 0xef))
                        *esi_1 = i.b
                        esi_1 = &esi_1[1]
                    else
                        ecx_7 = &ecx_7[1]
                        *esi_1 = i.b
                        *(edx + 4) = ecx_7
                        i.b = *ecx_7
                        esi_1[1] = i.b
                        esi_1 = &esi_1[2]
                    
                    ecx_7 = &ecx_7[1]
                    *(edx + 4) = ecx_7
                    
                    if (ecx_7 u>= edi_1)
                        goto label_59d04a
            case 0x23, 0x24, 0x25, 0x26, 0x27, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                    0x37, 0x38, 0x39, 0x3a, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                    0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 
                    0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 
                    0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 
                    0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7c
                goto label_59d04a
            case 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2f, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                arg_4 = ebx.b
                void* const __return_addr_5 = __return_addr
                *(edx + 4) = &i_1[1]
                char* var_14_5 = &arg_4
                arg_5 = 0
                sub_402670(__return_addr_5, var_14_5)
                esp = &var_10
                *arg2 = 6
                i.b = 1
            case 0x3b
                while (true)
                    i.b = *i_1
                    
                    if ((i.b u< 0x81 || i.b u> 0x9f) && (i.b u< 0xe0 || i.b u> 0xef))
                        if (i.b == 0xa)
                            *(edx + 4) += 1
                            __return_addr_1 = __return_addr
                            esp = &__return_addr_1
                            i = sub_59ce30(__return_addr_1, arg2)
                            break
                        
                        i = &i_1[1]
                    else
                        i = &i_1[2]
                    
                    i_1 = i
                    *(edx + 4) = i
                    
                    if (i_1 u>= edi_1)
                        goto label_59d04a
else
    *arg2 = 1
    i.b = 0

*esp
esp[1]
esp[2]
esp[3]
sub_69a5bc(esp[0x1005] ^ &esp[4])
return i
