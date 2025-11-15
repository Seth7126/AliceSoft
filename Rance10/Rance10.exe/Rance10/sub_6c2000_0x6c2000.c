// 函数: sub_6c2000
// 地址: 0x6c2000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg7
int32_t* ebp = arg3
int32_t* var_38 = ebp
int32_t var_3c = 0

if (esi == 0)
    void var_34
    int32_t eax
    int32_t edx_1
    eax, edx_1 = sub_6c1ab0(arg1, &var_34, arg3, 0x10000, esi)
    
    if (eax == 0xffffff80 && edx_1 == 0xffffffff)
        return eax
    
    if (edx_1 s<= 0 && (edx_1 s< 0 || eax u< 0))
        return 0xffffff7c
    
    esi = &var_34

int32_t var_58_2 = 0xe50
__builtin_memset(arg2, 0, 0x20)
int32_t var_5c = 1
arg2[7] = _calloc()
int128_t* eax_3 = arg4
*eax_3 = zx.o(0)
ebp[0x16] = 2
void* ecx = *esi
void var_24
int128_t* ebp_1

while ((*(ecx + 5) & 2) != 0)
    if (arg5 != 0)
        int32_t* ecx_1 = *arg5
        uint32_t edi_7 =
            ((zx.d(*(ecx + 0x11)) << 8 | zx.d(*(ecx + 0x10))) << 8 | zx.d(*(ecx + 0xf))) << 8
            | zx.d(*(ecx + 0xe))
        int32_t edx_2 = *arg6
        int32_t eax_8 = edx_2
        
        if (ecx_1 == 0 || eax_8 == 0)
        label_6c20ec:
            *arg6 = edx_2 + 1
            int32_t* ecx_3 = *arg5
            int32_t* eax_11
            
            if (ecx_3 == 0)
                int32_t var_58_4 = 4
                eax_11 = sub_705e22()
            else
                int32_t var_58_3 = (edx_2 + 1) << 2
                int32_t* var_5c_1 = ecx_3
                eax_11 = _realloc()
            
            *arg5 = eax_11
            eax_3 = *arg5
            *(eax_3 + (*arg6 << 2) - 4) = edi_7
            goto label_6c211b
        
        while (true)
            eax_8 -= 1
            
            if (*ecx_1 == edi_7)
                if (*arg5 != 0)
                    _free(*arg5)
                
                *arg5 = nullptr
                *arg6 = 0
                break
            
            ecx_1 = &ecx_1[1]
            
            if (eax_8 == 0)
                goto label_6c20ec
        
        goto label_6c22b8
    
label_6c211b:
    
    if (ebp[0x16] s< 3)
        void* ecx_5 = *esi
        uint32_t edx_9 =
            ((zx.d(*(ecx_5 + 0x11)) << 8 | zx.d(*(ecx_5 + 0x10))) << 8 | zx.d(*(ecx_5 + 0xf))) << 8
            | zx.d(*(ecx_5 + 0xe))
        
        if (ebp != 0xffffff88 && ebp[0x1e] != 0)
            sub_6b80e0(&ebp[0x1e])
            ebp[0x72] = edx_9
        
        eax_3 = sub_6b7dc0(&ebp[0x1e], esi)
        
        if (ebp != 0xffffff88 && ebp[0x1e] != 0)
            eax_3 = sub_6b8190(eax_3, &var_24, &ebp[0x1e], 1)
            
            if (eax_3 s> 0)
                eax_3 = sub_6b8a80(&var_24)
                
                if (eax_3 != 0)
                    ebp[0x16] = 3
                    eax_3 = sub_6b8b40(&var_24, arg4, arg2, &var_24)
                    
                    if (eax_3 != 0)
                    label_6c22b8:
                        ebp_1 = 0xffffff7b
                        goto label_6c22c1
    
    int32_t edx_14
    eax_3, edx_14 = sub_6c1ab0(eax_3, esi, ebp, 0x10000, 0)
    
    if (eax_3 == 0xffffff80 && edx_14 == 0xffffffff)
        ebp_1 = 0xffffff80
        goto label_6c22c1
    
    if (edx_14 s< 0)
        goto label_6c22fa
    
    if (edx_14 s<= 0 && eax_3 u< 0)
        goto label_6c22fa
    
    if (ebp[0x16] == 3)
        void* ecx_12 = *esi
        eax_3 = zx.d(*(ecx_12 + 0xe))
        
        if (ebp[0x72] == (((zx.d(*(ecx_12 + 0x11)) << 8 | zx.d(*(ecx_12 + 0x10))) << 8
                | zx.d(*(ecx_12 + 0xf))) << 8 | eax_3))
            eax_3 = sub_6b7dc0(&ebp[0x1e], esi)
            break
    
    ecx = *esi

if (ebp[0x16] != 3)
label_6c22fa:
    ebp_1 = 0xffffff7c
label_6c22c1:
    sub_6b8320(arg2)
    sub_6b82c0(arg4)
    var_38[0x16] = 2
    return ebp_1

int32_t i = 0

while (i s< 2)
    int32_t* edi_9 = &ebp[0x1e]
    
    while (true)
        if (edi_9 != 0 && *edi_9 != 0)
            eax_3 = sub_6b8190(eax_3, &var_24, edi_9, 1)
            
            if (eax_3 != 0)
                if (eax_3 == 0xffffffff)
                    goto label_6c22b8
                
                eax_3 = sub_6b8b40(&var_24, arg4, arg2, &var_24)
                ebp_1 = eax_3
                
                if (ebp_1 != 0)
                    goto label_6c22c1
                
                i += 1
                
                if (i s>= 2)
                    return 0
                
                continue
        
        ebp = var_38
        
        while (true)
            int32_t eax_24
            int32_t edx_26
            eax_24, edx_26 = sub_6c1ab0(eax_3, esi, ebp, 0x10000, 0)
            
            if (edx_26 s< 0)
                goto label_6c22b8
            
            if (edx_26 s<= 0 && eax_24 u< 0)
                goto label_6c22b8
            
            uint32_t eax_25 = sub_6b7960(esi)
            
            if (ebp[0x72] == eax_25)
                eax_3 = sub_6b7dc0(edi_9, esi)
                break
            
            eax_3 = *esi
            
            if ((*(eax_3 + 5) & 2) != 0)
                if (var_3c != 0)
                    goto label_6c22b8
                
                var_3c = 1
        
        break

return 0
