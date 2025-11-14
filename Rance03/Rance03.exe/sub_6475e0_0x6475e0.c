// 函数: sub_6475e0
// 地址: 0x6475e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg7
void* ebx = arg2
void* var_3c = ebx
int32_t var_38 = 0
int32_t edi
int32_t var_4c = edi

if (esi == 0)
    void var_34
    arg1, arg2 = sub_647050(arg1, &var_34, arg3, 0x10000, esi)
    
    if (arg1 == 0xffffff80 && arg2 == 0xffffffff)
        return arg1
    
    if (arg2 s<= 0 && (arg2 s< 0 || arg1 u< 0))
        return 0xffffff7c
    
    esi = &var_34

__builtin_memset(ebx, 0, 0x20)
*(ebx + 0x1c) = sub_69cb1c(arg1, arg2, arg3, 1, 0xe50)
int128_t* eax_2 = arg4
*eax_2 = zx.o(0)
arg3[0x16] = 2
void* ecx = *esi
void var_24
int32_t ebx_2

if ((*(ecx + 5) & 2) != 0)
    while (true)
        if (arg5 != 0)
            int32_t* ecx_1 = *arg5
            uint32_t edi_10 =
                ((zx.d(*(ecx + 0x11)) << 8 | zx.d(*(ecx + 0x10))) << 8 | zx.d(*(ecx + 0xf))) << 8
                | zx.d(*(ecx + 0xe))
            int32_t edx_1 = *arg6
            int32_t eax_7 = edx_1
            
            if (ecx_1 != 0 && eax_7 != 0)
                while (true)
                    eax_7 -= 1
                    
                    if (*ecx_1 == edi_10)
                        int32_t* eax_22 = *arg5
                        
                        if (eax_22 != 0)
                            _free(eax_22)
                        
                        *arg5 = nullptr
                        *arg6 = 0
                        break
                    
                    ecx_1 = &ecx_1[1]
                    
                    if (eax_7 == 0)
                        goto label_6476cc
                
                goto label_64787b
            
        label_6476cc:
            *arg6 = edx_1 + 1
            int32_t* ecx_3 = *arg5
            int32_t* eax_10
            
            if (ecx_3 == 0)
                eax_10 = _malloc(4)
            else
                eax_10 = _realloc(ecx_3, (edx_1 + 1) << 2)
            
            *arg5 = eax_10
            eax_2 = *arg5
            *(eax_2 + (*arg6 << 2) - 4) = edi_10
        
        if (arg3[0x16] s< 3)
            void* ecx_5 = *esi
            uint32_t edx_8 = ((zx.d(*(ecx_5 + 0x11)) << 8 | zx.d(*(ecx_5 + 0x10))) << 8
                | zx.d(*(ecx_5 + 0xf))) << 8 | zx.d(*(ecx_5 + 0xe))
            
            if (arg3 != 0xffffff88 && arg3[0x1e] != 0)
                sub_63d5b0(&arg3[0x1e])
                arg3[0x72] = edx_8
            
            eax_2 = sub_63d2a0(&arg3[0x1e], esi)
            
            if (arg3 != 0xffffff88 && arg3[0x1e] != 0)
                eax_2 = sub_63d660(eax_2, &var_24, &arg3[0x1e], 1)
                
                if (eax_2 s> 0)
                    eax_2 = sub_63e030(&var_24)
                    
                    if (eax_2 != 0)
                        arg3[0x16] = 3
                        eax_2 = sub_63e0e0(&var_24, arg4, var_3c, &var_24)
                        
                        if (eax_2 != 0)
                            goto label_64787b
        
        int32_t edx_13
        eax_2, edx_13 = sub_647050(eax_2, esi, arg3, 0x10000, 0)
        
        if (eax_2 == 0xffffff80 && edx_13 == 0xffffffff)
            ebx_2 = 0xffffff80
            goto label_647884
        
        if (edx_13 s< 0)
            goto label_6478b9
        
        if (edx_13 s<= 0 && eax_2 u< 0)
            goto label_6478b9
        
        void* ecx_12
        
        if (arg3[0x16] == 3)
            ecx_12 = *esi
            eax_2 = zx.d(*(ecx_12 + 0xe))
        
        if (arg3[0x16] == 3 && arg3[0x72] == ((
                (zx.d(*(ecx_12 + 0x11)) << 8 | zx.d(*(ecx_12 + 0x10))) << 8 | zx.d(*(ecx_12 + 0xf))) << 8
                | eax_2))
            sub_63d2a0(&arg3[0x1e], esi)
        else
            ecx = *esi
            
            if ((*(ecx + 5) & 2) != 0)
                continue
        
        ebx = var_3c
        break

if (arg3[0x16] != 3)
label_6478b9:
    ebx_2 = 0xffffff7c
else
    int32_t edi_12 = 0
    
    while (true)
        void* eax_19 = sub_63d790(&arg3[0x1e])
        
        if (eax_19 == 0)
            int32_t ebx_3 = var_38
            
            while (true)
                int32_t eax_25
                int32_t edx_24
                eax_25, edx_24 = sub_647050(eax_19, esi, arg3, 0x10000, 0)
                
                if (edx_24 s< 0)
                    goto label_64787b
                
                if (edx_24 s<= 0 && eax_25 u< 0)
                    goto label_64787b
                
                uint32_t eax_26 = sub_63ce40(esi)
                
                if (arg3[0x72] == eax_26)
                    sub_63d2a0(&arg3[0x1e], esi)
                    ebx = var_3c
                    break
                
                eax_19 = *esi
                
                if ((*(eax_19 + 5) & 2) != 0)
                    if (ebx_3 != 0)
                        goto label_64787b
                    
                    ebx_3 = 1
                    var_38 = 1
        else
            if (eax_19 == 0xffffffff)
                break
            
            ebx_2 = sub_63e0e0(&var_24, arg4, ebx, &var_24)
            
            if (ebx_2 != 0)
                goto label_647884
            
            edi_12 += 1
            
            if (edi_12 s>= 2)
                return 0
            
            ebx = var_3c
    
label_64787b:
    ebx_2 = 0xffffff7b

label_647884:
sub_63d910(var_3c)
sub_63d8b0(arg4)
arg3[0x16] = 2
return ebx_2
