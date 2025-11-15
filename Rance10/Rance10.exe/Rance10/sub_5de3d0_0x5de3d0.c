// 函数: sub_5de3d0
// 地址: 0x5de3d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* ecx = __alloca_probe(0x300c)
int32_t arg_3008 = __security_cookie ^ &__return_addr
int32_t* edx = ecx
int32_t ebx
int32_t var_4 = ebx
int32_t ebp
int32_t var_8 = ebp
char arg_8
char* ebx_1 = &arg_8
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
int32_t* esp = &var_10
int32_t edi_1 = edx[2]
char* i = *edx
edx[1] = i

for (; i u< edi_1; i = *edx)
    ecx.b = *i
    
    if (ecx.b u<= 0x20 || ecx.b == 0x7f)
        *edx = &i[1]
    else
        if (&i[1] u>= edi_1)
            break
        
        i = *edx
        
        if (*i != 0x2f)
            break
        
        if (i[1] != 0x2f)
            break
        
        *edx += 2
        
        if (*edx u< edi_1)
            while (true)
                char* esi_1 = *edx
                ecx.b = *esi_1
                
                if (ecx.b u< 0x81 || ecx.b u> 0x9f)
                    i.b = ecx.b
                    i.b += 0x20
                
                if ((ecx.b u< 0x81 || ecx.b u> 0x9f) && i.b u> 0xf)
                    if (ecx.b == 0xa)
                        *edx += 1
                        break
                    
                    i = &esi_1[1]
                else
                    i = &esi_1[2]
                
                *edx = i
                
                if (i u>= edi_1)
                    goto label_5de46d

label_5de46d:
char* i_1 = *edx

if (i_1 u< edi_1)
    ecx.b = *i_1
    char* var_18
    char arg_9
    
    if (ecx.b u< 0x61 || ecx.b u> 0x7a)
        i.b = ecx.b
        i.b -= 0x41
        
        if (i.b u<= 0x19 || (ecx.b u>= 0x81 && ecx.b u<= 0x9f))
            goto label_5de65b
        
        i.b = ecx.b
        i.b += 0x20
        
        if (i.b u<= 0xf)
            goto label_5de65b
        
        i.b = ecx.b
        i.b -= 0x30
        
        if (i.b u<= 9 || ecx.b == 0x2d)
            void* i_2 = &i_1[1]
            arg_8 = ecx.b
            ebx_1:1.b = 0
            *edx = i_2
            char* ecx_4 = &arg_9
            
            if (i_2 u< edi_1)
                do
                    ebx_1.b = *i_2
                    i.b = ebx_1.b
                    i.b -= 0x30
                    
                    if (i.b u> 9)
                        if (ebx_1.b != 0x2e)
                            break
                        
                        if (ebx_1:1.b != 0)
                            break
                        
                        *ecx_4 = ebx_1.b
                        ebx_1:1.b = 1
                    else
                        *ecx_4 = ebx_1.b
                    
                    i_2 += 1
                    ecx_4 = &ecx_4[1]
                    i = i_2
                    *edx = i
                while (i u< edi_1)
            
            *ecx_4 = 0
            sub_403450(&arg_8)
            esp = &var_10
            void* eax_8
            eax_8.b = ebx_1:1.b != 0
            *arg2 = eax_8 + 2
        label_5de691:
            i.b = 1
        else if (sx.d(ecx.b) - 0x22 u> 0x5b)
        label_5de507:
            *arg2 = 0
            i.b = 0
        else
            switch (ecx.b)
                case 0x22
                    void* esi_2 = &i_1[1]
                    *edx = esi_2
                    
                    if (esi_2 u>= edi_1)
                        goto label_5de507
                    
                    do
                        i.b = *esi_2
                        
                        if (i.b == 0x22)
                            *edx = esi_2 + 1
                            char* var_14_2 = &arg_8
                            *ebx_1 = 0
                            sub_403450(var_14_2)
                            esp = &var_10
                            *arg2 = 5
                            goto label_5de691_2
                        
                        ecx.b = i.b
                        i, ecx = sub_404d60(ecx.b)
                        bool cond:0_1 = i.b == 0
                        i.b = *esi_2
                        *ebx_1 = i.b
                        
                        if (cond:0_1)
                            esi_2 += 1
                        else
                            ecx = esi_2 + 1
                            ebx_1 = &ebx_1[1]
                            *edx = ecx
                            esi_2 = &ecx[1]
                            i.b = *ecx
                            *ebx_1 = i.b
                        
                        ebx_1 = &ebx_1[1]
                        *edx = esi_2
                    while (esi_2 u< edi_1)
                    
                    *arg2 = 0
                    i.b = 0
                case 0x23, 0x24, 0x25, 0x26, 0x27, 0x2e, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 
                        0x37, 0x38, 0x39, 0x3a, 0x3c, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 0x44, 
                        0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 
                        0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5c, 0x5e, 
                        0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 
                        0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 
                        0x77, 0x78, 0x79, 0x7a, 0x7c
                    goto label_5de507
                case 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2f, 0x3d, 0x5b, 0x5d, 0x7b, 0x7d
                    arg_8 = ecx.b
                    *edx = &i_1[1]
                    char* var_14_3 = &arg_8
                    arg_9 = 0
                    sub_403450(var_14_3)
                    esp = &var_10
                    *arg2 = 6
                label_5de691_1:
                    i.b = 1
                case 0x3b
                    while (true)
                        ebx_1.b = *i_1
                        ecx.b = ebx_1.b
                        char eax_5
                        eax_5, ecx = sub_404d60(ecx.b)
                        
                        if (eax_5 == 0)
                            if (ebx_1.b == 0xa)
                                *edx += 1
                                var_18 = arg1
                                esp = &var_18
                                i = sub_5de3d0(var_18, arg2)
                                break
                            
                            i = &i_1[1]
                        else
                            i = &i_1[2]
                        
                        i_1 = i
                        *edx = i
                        
                        if (i_1 u>= edi_1)
                            goto label_5de507
    else
    label_5de65b:
        
        do
            ecx.b = *i_1
            
            if (ecx.b u< 0x61 || ecx.b u> 0x7a)
                i.b = ecx.b
                i.b -= 0x41
                
                if (i.b u<= 0x19)
                    *ebx_1 = ecx.b
                    i = &i_1[1]
                else
                    i.b = ecx.b
                    i.b -= 0x30
                    
                    if (i.b u<= 9)
                        *ebx_1 = ecx.b
                        i = &i_1[1]
                    else
                        if (ecx.b u< 0x81 || ecx.b u> 0x9f)
                            i.b = ecx.b
                            i.b += 0x20
                            
                            if (i.b u> 0xf)
                                break
                        
                        *ebx_1 = ecx.b
                        ebx_1 = &ebx_1[1]
                        *edx = &i_1[1]
                        i.b = i_1[1]
                        *ebx_1 = i.b
                        i = &i_1[2]
            else
                *ebx_1 = ecx.b
                i = &i_1[1]
            
            i_1 = i
            *edx = i
            ebx_1 = &ebx_1[1]
        while (i_1 u< edi_1)
        
        *ebx_1 = 0
        void* ecx_6
        
        if (arg_8 != 0)
            char* ecx_7 = &arg_8
            
            do
                i.b = *ecx_7
                ecx_7 = &ecx_7[1]
            while (i.b != 0)
            
            ecx_6 = ecx_7 - &arg_9
        else
            ecx_6 = nullptr
        
        var_18 = &arg_8
        sub_403490(arg1, var_18, ecx_6)
        esp = &var_10
        *arg2 = 4
    label_5de691_2:
        i.b = 1
else
    *arg2 = 1
    i.b = 0

*esp
esp[1]
esp[2]
esp[3]
@__security_check_cookie@4(esp[0xc06] ^ &esp[4])
return i
