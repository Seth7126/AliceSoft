// 函数: sub_57d6f0
// 地址: 0x57d6f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6dc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* i_4
int32_t* i_5 = i_4
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_44 = ebp
int128_t xmm0 = data_7091e0
struct sealengine::CCombineSurfaceList::VTable* const var_24 =
    &sealengine::CCombineSurfaceList::`vftable'
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* var_34 = nullptr
int32_t var_30 = 0
var_34 = sub_4a6eb0()
var_4.b = 1
int32_t** i = *(ebp + 0x4c)
float var_40
float var_3c

if (i != *(ebp + 0x50))
    do
        i_4 = *i
        int32_t var_60_1 = i_4[8]
        float edi_1 = sub_582960(ebp + 0x30, i_4[7])
        var_40 = edi_1
        
        if (edi_1 != 0 && *(edi_1 i+ 0x3c) == 0 && *(edi_1 i+ 0x40) == 0)
            float eax_4
            
            for (void* j = *(edi_1 i+ 0x20); j != *(edi_1 i+ 0x24); j += 0x28)
                float xmm0_1 = *(j + 0x20)
                xmm0_1 - 1f
                eax_4:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                    | (xmm0_1 < 1f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_57d861
                
                float xmm0_2 = *(j + 0x24)
                xmm0_2 - 1f
                eax_4:1.b = (xmm0_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 1f) ? 1 : 0) << 2
                    | (xmm0_2 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_57d861
            
            eax_4.b = *(i_4 + 0x25)
            
            if (eax_4.b == 0 && sub_5833f0(i_4, ebp + 0x30) != 0)
                int32_t* eax_8 = *(edi_1 i+ 0x30)
                
                if (((*(edi_1 i+ 0x34) - *(edi_1 i+ 0x30)) & 0xfffffffc) s> 0
                        || eax_8 != *(edi_1 i+ 0x34))
                    void* eax_9 = *eax_8
                    
                    if (eax_9 != 0)
                        struct sealengine::CCombineSurface::VTable** edi_2 = *(eax_9 + 0x10)
                        
                        if (edi_2 != 0)
                            char eax_10
                            int32_t ecx_3
                            eax_10, ecx_3 = sub_52eaf0(&var_24, edi_2)
                            
                            if (eax_10 == 0)
                                char eax_13
                                eax_13, ecx_3 = sub_52eb40(&var_24, edi_2)
                                
                                if (eax_13 != 0)
                                    uint32_t var_60_6 = zx.d(data_75dd30)
                                    float* var_64_3 = &var_40
                                    void var_2c
                                    sub_4a6ee0(&var_34, &var_2c, ecx_3)
                            else
                                uint32_t var_60_4 = zx.d(data_75dd30)
                                float* var_64_2 = &var_40
                                sub_4a6ee0(&var_34, &var_3c, ecx_3)
        
    label_57d861:
        i = &i[1]
    while (i != *(var_44 + 0x50))
    
    ebp = var_44

sub_52ec50(&var_24)
float arg_4
float arg_8

if (sub_57dbe0(ebp, &var_24, arg_4, arg_8) != 0)
    void** i_1 = *(ebp + 0x4c)
    
    if (i_1 != *(ebp + 0x50))
        do
            void* ebx = *i_1
            int32_t var_60_8 = *(ebx + 0x20)
            void* edi_3 = sub_582960(ebp + 0x30, *(ebx + 0x1c))
            
            if (edi_3 != 0 && *(edi_3 + 0x3c) == 0 && *(edi_3 + 0x40) == 0)
                void* eax_17
                
                for (void* j_1 = *(edi_3 + 0x20); j_1 != *(edi_3 + 0x24); j_1 += 0x28)
                    float xmm0_3 = *(j_1 + 0x20)
                    xmm0_3 - 1f
                    eax_17:1.b = (xmm0_3 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_3, 1f) ? 1 : 0) << 2 | (xmm0_3 < 1f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        goto label_57d9d3
                    
                    float xmm0_4 = *(j_1 + 0x24)
                    xmm0_4 - 1f
                    eax_17:1.b = (xmm0_4 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_4, 1f) ? 1 : 0) << 2 | (xmm0_4 < 1f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (p_8)
                        goto label_57d9d3
                
                eax_17.b = *(ebx + 0x25)
                
                if (eax_17.b == 0 && sub_5833f0(ebx, ebp + 0x30) != 0)
                    int32_t* eax_21 = *(edi_3 + 0x30)
                    
                    if (((*(edi_3 + 0x34) - *(edi_3 + 0x30)) & 0xfffffffc) s> 0
                            || eax_21 != *(edi_3 + 0x34))
                        void* edi_4 = *eax_21
                        
                        if (edi_4 != 0)
                            int32_t edi_5 = *(edi_4 + 0x10)
                            
                            if (edi_5 != 0 && sub_52eaf0(&var_24, edi_5) != 0)
                                int32_t eax_23 = sub_52ed10(&var_24, edi_5)
                                
                                if (eax_23 != 0xffffffff)
                                    int32_t ecx_14 = *(var_44 + 0x3c) + eax_23
                                    *(ebx + 0x20) = 0
                                    *(ebx + 0x1c) = ecx_14
                                    char eax_24
                                    int32_t ecx_16
                                    eax_24, ecx_16 =
                                        sub_52ecb0(&var_24, edi_5, &var_3c, &var_40, &arg_4, &arg_8)
                                    
                                    if (eax_24 != 0)
                                        int32_t var_60_13 = ecx_16
                                        sub_582f40(ebx, var_3c, var_40, arg_4, arg_8)
            
        label_57d9d3:
            i_1 = &i_1[1]
        while (i_1 != *(var_44 + 0x50))
        
        ebp = var_44
    
    int32_t* eax_26 = var_34
    i_4 = *eax_26
    
    if (i_4 != eax_26)
        do
            float edi_6 = *(ebp + 0x50)
            int32_t* i_3 = *(ebp + 0x4c)
            arg_8 = edi_6
            void* ecx_19
            
            if (i_3 == edi_6)
            label_57da33:
                int32_t ebp_3 = i_4[4]
                ecx_19 = var_44 + 0x34
                arg_8 = ecx_19
                int32_t** eax_29 = *ecx_19
                int32_t* i_2 = *eax_29
                
                if (i_2 != eax_29)
                    do
                        if (i_2[5] == ebp_3)
                            int32_t* ecx_21 = i_2[5]
                            
                            if (ecx_21 != 0)
                                (**ecx_21)(1)
                            
                            sub_420180(arg_8, &var_3c, i_2)
                            break
                        
                        float eax_30 = i_2[5]
                        arg_4 = eax_30
                        void** j_2 = *(eax_30 i+ 0x48)
                        
                        if (j_2 != *(eax_30 i+ 0x4c))
                            do
                                ecx_19 = *j_2
                                
                                if (ecx_19 != 0)
                                    if (ecx_19 == ebp_3)
                                        if (ecx_19 != 0)
                                            (**ecx_19)(1)
                                        
                                        *j_2 = nullptr
                                        goto label_57db0f
                                    
                                    char eax_31
                                    eax_31, ecx_19 = sub_581ef0(ecx_19, ebp_3)
                                    
                                    if (eax_31 != 0)
                                        goto label_57db0f
                                    
                                    eax_30 = arg_4
                                
                                j_2 = &j_2[1]
                            while (j_2 != *(eax_30 i+ 0x4c))
                            
                            ecx_19 = arg_8
                        
                        if (*(i_2 + 0xd) == 0)
                            int32_t* i_6 = i_2[2]
                            
                            if (*(i_6 + 0xd) != 0)
                                int32_t* i_8 = i_2[1]
                                
                                if (*(i_8 + 0xd) == 0)
                                    while (i_2 == i_8[2])
                                        i_2 = i_8
                                        i_8 = i_8[1]
                                        
                                        if (*(i_8 + 0xd) != 0)
                                            break
                                
                                i_2 = i_8
                            else
                                i_2 = i_6
                                int32_t* i_7 = *i_2
                                
                                while (*(i_7 + 0xd) == 0)
                                    i_2 = i_7
                                    i_7 = *i_2
                    while (i_2 != *ecx_19)
            else
                do
                    void* eax_27 = *i_3
                    int32_t var_60_15 = *(eax_27 + 0x20)
                    void* eax_28
                    eax_28, ecx_19 = sub_582960(ebp + 0x30, *(eax_27 + 0x1c))
                    
                    if (eax_28 != 0 && i_4[4] == eax_28)
                        break
                    
                    i_3 = &i_3[1]
                while (i_3 != *(var_44 + 0x50))
                
                if (i_3 == arg_8)
                    goto label_57da33
        label_57db0f:
            
            if (*(i_4 + 0xd) == 0)
                int32_t* i_9 = i_4[2]
                
                if (*(i_9 + 0xd) != 0)
                    int32_t* i_11 = i_4[1]
                    
                    if (*(i_11 + 0xd) == 0)
                        while (i_4 == i_11[2])
                            i_4 = i_11
                            i_11 = i_11[1]
                            
                            if (*(i_11 + 0xd) != 0)
                                break
                    
                    i_4 = i_11
                else
                    i_4 = i_9
                    int32_t* i_10 = *i_4
                    
                    while (*(i_10 + 0xd) == 0)
                        i_4 = i_10
                        i_10 = *i_4
            
            ebp = var_44
        while (i_4 != var_34)
    
    i_4.b = 1
else
    i_4.b = 0

int32_t* eax_34 = var_34
sub_4200d0(&var_34, &arg_8, *eax_34, eax_34)
j__free(var_34)
var_24 = &sealengine::CCombineSurfaceList::`vftable'
int32_t var_4_1 = 2
int32_t* esi = xmm0:8.d
int32_t result = xmm0:0xc.d

if (esi != result)
    do
        int32_t* ecx_24 = *esi
        
        if (ecx_24 != 0)
            (**ecx_24)(1)
            result = xmm0:0xc.d
        
        esi = &esi[1]
    while (esi != result)
    
    esi = xmm0:8.d

if (esi != 0)
    j__free(esi)

result.b = i_4.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
