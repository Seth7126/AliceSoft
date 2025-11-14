// 函数: sub_5483c0
// 地址: 0x5483c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
void* var_20 = ebx
sub_548690(arg1)

if (arg3 == 0)
label_548683:
    return 0

void* edi_1 = arg2
*(ebx + 4) = *(edi_1 + 0x1c)
int32_t* result_1
int32_t* eax_2 = sub_581da0(edi_1, &result_1)
*(ebx + 8) = *eax_2
*(ebx + 0xc) = eax_2[1]
int32_t eax_6 = (*(edi_1 + 0x34) - *(edi_1 + 0x30)) s>> 2
sub_59c550(ebx + 0x1c, eax_6)
int32_t esi_1 = 0

if (eax_6 s> 0)
    do
        void* eax_11
        
        if (esi_1 s< 0 || esi_1 s>= (*(edi_1 + 0x34) - *(edi_1 + 0x30)) s>> 2)
            void** eax_12 = *(edi_1 + 0x30)
            
            if (eax_12 != *(edi_1 + 0x34))
                eax_11 = *eax_12
                goto label_548443
        else
            eax_11 = *(*(edi_1 + 0x30) + (esi_1 << 2))
        label_548443:
            
            if (eax_11 != 0)
                int32_t ecx_3 = *(eax_11 + 0x38)
                int32_t eax_13
                
                if (ecx_3 + *(eax_11 + 0x34) s< 0 || ecx_3 + *(eax_11 + 0x34) s<= 0)
                    eax_13 = *(eax_11 + 0x10)
                else
                    eax_13 = *(eax_11 + 0x14)
                
                if (eax_13 != 0)
                    int32_t var_34_3 = eax_13
                    struct sealengine::CSurfaceTexture::VTable** eax_14 = sub_59ca30(arg3)
                    
                    if (eax_14 != 0)
                        sub_59c5e0(var_20 + 0x1c, esi_1, eax_14)
                        sub_53a360(eax_14)
        esi_1 += 1
    while (esi_1 s< eax_6)
    
    ebx = var_20

void* eax_15 = *(edi_1 + 0x3c)
void* esi_2

if (eax_15 == 0)
    esi_2 = arg3
else
    int32_t ecx_9 = *(eax_15 + 0x38)
    int32_t eax_16
    
    if (ecx_9 + *(eax_15 + 0x34) s< 0 || ecx_9 + *(eax_15 + 0x34) s<= 0)
        eax_16 = *(eax_15 + 0x10)
    else
        eax_16 = *(eax_15 + 0x14)
    
    esi_2 = arg3
    
    if (eax_16 != 0)
        int32_t var_34_5 = eax_16
        *(ebx + 0x2c) = sub_59ca30(esi_2)

void* eax_18 = *(edi_1 + 0x40)

if (eax_18 != 0)
    int32_t ecx_12 = *(eax_18 + 0x38)
    int32_t eax_19
    
    if (ecx_12 + *(eax_18 + 0x34) s< 0 || ecx_12 + *(eax_18 + 0x34) s<= 0)
        eax_19 = *(eax_18 + 0x10)
    else
        eax_19 = *(eax_18 + 0x14)
    
    if (eax_19 != 0)
        int32_t var_34_6 = eax_19
        *(ebx + 0x30) = sub_59ca30(esi_2)

int32_t ecx_15 = 0
int32_t* result = (*(edi_1 + 0x4c) - *(edi_1 + 0x48)) s>> 2
result_1 = result
int32_t var_1c_2 = 0

if (result s> 0)
    do
        int32_t esi_3
        
        if (ecx_15 s>= 0 && ecx_15 s< (*(edi_1 + 0x4c) - *(edi_1 + 0x48)) s>> 2)
            esi_3 = *(*(edi_1 + 0x48) + (ecx_15 << 2))
        
        if (ecx_15 s< 0 || ecx_15 s>= (*(edi_1 + 0x4c) - *(edi_1 + 0x48)) s>> 2 || esi_3 == 0)
            result = *(ebx + 0x38)
            int32_t* esi_5 = ebx + 0x34
            int32_t var_14 = 0
            int32_t edx_1
            
            if (&var_14 u< result)
                edx_1 = *esi_5
                edi_1 = arg2
            
            if (&var_14 u>= result || edx_1 u> &var_14)
                if (result == esi_5[2])
                    int32_t var_34_11 = ecx_15
                    sub_412f20(esi_5)
                    ecx_15 = var_1c_2
                
                result = esi_5[1]
                
                if (result != 0)
                    *result = 0
            else
                if (result == esi_5[2])
                    int32_t var_34_10 = ecx_15
                    sub_412f20(esi_5)
                    ecx_15 = var_1c_2
                
                int32_t** edx_2 = esi_5[1]
                
                if (edx_2 != 0)
                    *edx_2 = *(*esi_5 + ((&var_14 - edx_1) s>> 2 << 2))
                
                ebx = var_20
            
            esi_5[1] += 4
        else
            struct sealengine::CMaterial::VTable** eax_27 = sub_69adc6(0x58)
            struct sealengine::CMaterial::VTable** ebx_2
            
            if (eax_27 == 0)
                ebx_2 = nullptr
            else
                ebx_2 = sub_548240(eax_27)
            
            struct sealengine::CMaterial::VTable** var_18 = ebx_2
            
            if (sub_5483c0(esi_3, arg3) == 0)
                if (ebx_2 != 0)
                    (*ebx_2)->vFunc_0(1)
                
                goto label_548683
            
            struct sealengine::CMaterial::VTable*** ecx_18 = &var_18
            result = *(var_20 + 0x38)
            
            if (&var_18 u< result)
                ecx_18 = *(var_20 + 0x34)
            
            if (&var_18 u>= result || ecx_18 u> &var_18)
                if (result == *(var_20 + 0x3c))
                    struct sealengine::CMaterial::VTable*** var_34_9 = ecx_18
                    sub_412f20(var_20 + 0x34)
                
                result = *(var_20 + 0x38)
                
                if (result != 0)
                    *result = ebx_2
                
                *(var_20 + 0x38) += 4
                ebx = var_20
                ecx_15 = var_1c_2
            else
                if (result == *(var_20 + 0x3c))
                    struct sealengine::CMaterial::VTable*** var_34_8 = ecx_18
                    sub_412f20(var_20 + 0x34)
                
                int32_t** ecx_20 = *(var_20 + 0x38)
                
                if (ecx_20 != 0)
                    *ecx_20 = *(*(var_20 + 0x34) + ((&var_18 - ecx_18) s>> 2 << 2))
                
                *(var_20 + 0x38) += 4
                ebx = var_20
                ecx_15 = var_1c_2
        
        ecx_15 += 1
        var_1c_2 = ecx_15
    while (ecx_15 s< result_1)

if (ebx + 0x40 != edi_1 + 4)
    sub_401ff0(ebx + 0x40, edi_1 + 4, 0, 0xffffffff)

result.b = 1
return result
