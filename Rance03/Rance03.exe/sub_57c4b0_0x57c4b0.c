// 函数: sub_57c4b0
// 地址: 0x57c4b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c6d48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_28 = ebx
int32_t var_48 = arg3
void* eax_3 = sub_582960(ebx + 0x30, arg2)

if (eax_3 == 0)
    eax_3.b = 0
else
    eax_3.b = *(eax_3 + 0x44)

char var_20 = eax_3.b
struct sealengine::CPolyMesh::VTable** eax_4 = sub_69adc6(0x7c)
struct sealengine::CPolyMesh::VTable** ebp_1

if (eax_4 == 0)
    ebp_1 = nullptr
else
    ebp_1 = sub_582d30(eax_4, arg2, arg3, arg4, arg5, var_20)

void** arg_4
void** var_48_2 = arg_4
struct sealengine::CPolyMesh::VTable** var_2c = ebp_1
struct sealengine::CPolyMesh::VTable** var_30 = ebp_1
sub_582e90(ebp_1, var_48_2)
int32_t* var_1c = nullptr
int32_t var_18 = 0
int32_t* eax_6
int32_t ecx_3
int32_t edx
eax_6, ecx_3, edx = sub_4a6eb0()
var_1c = eax_6
int32_t var_4 = 0
void* edi = *arg6

if (edi != arg6[1])
    while (true)
        int32_t var_24_1 = 0
        int32_t* ebp_2 = edi + 8
        
        while (true)
            int32_t esi_1 = *ebp_2
            
            if (esi_1 s>= 0)
                ecx_3 = *(ebx + 0x5c) - *(ebx + 0x58)
                int32_t eax_8
                int32_t edx_1
                edx_1:eax_8 = muls.dp.d(0x38e38e39, ecx_3)
                edx = edx_1 s>> 3
                
                if (esi_1 s< ecx_3 s/ 0x24)
                    int32_t eax_12 = *(ebx + 0x58)
                    ecx_3 = esi_1 * 9
                    int32_t i = *(eax_12 + (ecx_3 << 2) + 0xc)
                    void* ebx_1 = eax_12 + (ecx_3 << 2)
                    
                    for (; i != *(ebx_1 + 0x10); i += 4)
                        uint32_t var_48_3 = zx.d(data_75dd2a)
                        int32_t i_1 = i
                        int32_t** var_14
                        ecx_3, edx = sub_4ce350(&var_1c, &var_14, ecx_3)
                    
                    ebp_2 = &ebp_2[0xf]
                    ebx = var_28
                    int32_t eax_15 = var_24_1 + 1
                    var_24_1 = eax_15
                    
                    if (eax_15 s>= 3)
                        break
                    
                    continue
            
            void** eax_32 = arg_4
            
            if (eax_32[5] u>= 0x10)
                eax_32 = *eax_32
            
            sub_59f4e0(eax_32, edx, ecx_3, 0x6e5228, eax_32)
            ebx.b = 0
            goto label_57c7a3
        
        if (var_18 s<= *(ebx + 0x2c))
            ebp_1 = var_2c
            ecx_3, edx = sub_57ef30(&ebp_1[0xa], edi)
            edi += 0xbc
        else
            void* var_48_4 = ebx + 0x58
            sub_583020(var_2c)
            struct sealengine::CPolyMesh::VTable*** ecx_7 = &var_30
            int32_t eax_18 = *(var_28 + 0x50)
            
            if (&var_30 u< eax_18)
                ecx_7 = *(var_28 + 0x4c)
            
            if (&var_30 u>= eax_18 || ecx_7 u> &var_30)
                if (eax_18 == *(var_28 + 0x54))
                    struct sealengine::CPolyMesh::VTable*** var_48_6 = ecx_7
                    sub_412f20(var_28 + 0x4c)
                
                struct sealengine::CPolyMesh::VTable*** eax_21 = *(var_28 + 0x50)
                
                if (eax_21 != 0)
                    *eax_21 = var_2c
            else
                if (eax_18 == *(var_28 + 0x54))
                    struct sealengine::CPolyMesh::VTable*** var_48_5 = ecx_7
                    sub_412f20(var_28 + 0x4c)
                
                int32_t* ecx_9 = *(var_28 + 0x50)
                
                if (ecx_9 != 0)
                    *ecx_9 = *(*(var_28 + 0x4c) + ((&var_30 - ecx_7) s>> 2 << 2))
            
            *(var_28 + 0x50) += 4
            struct sealengine::CPolyMesh::VTable** eax_22 = sub_69adc6(0x7c)
            
            if (eax_22 == 0)
                ebp_1 = nullptr
            else
                ebp_1 = sub_582d30(eax_22, arg2, arg3, arg4, arg5, var_20)
            
            void** var_48_8 = arg_4
            var_2c = ebp_1
            var_30 = ebp_1
            ecx_3, edx = sub_582e90(ebp_1, var_48_8)
            int32_t* eax_24 = var_1c
            void** ebx_5 = eax_24[1]
            void** esi_3 = ebx_5
            
            if (*(ebx_5 + 0xd) == 0)
                do
                    sub_420090(esi_3[2])
                    esi_3 = *esi_3
                    ecx_3, edx = j__free(ebx_5)
                    ebx_5 = esi_3
                while (*(esi_3 + 0xd) == 0)
                
                eax_24 = var_1c
            
            ebx = var_28
            eax_24[1] = eax_24
            int32_t* eax_25 = var_1c
            *eax_25 = eax_25
            int32_t* eax_26 = var_1c
            eax_26[2] = eax_26
            var_18 = 0
        
        if (edi == arg6[1])
            break

void* var_48_12 = ebx + 0x58
sub_583020(ebp_1)
int32_t eax_29 = *(ebx + 0x50)
struct sealengine::CPolyMesh::VTable*** ecx_16 = &var_30

if (&var_30 u< eax_29)
    ecx_16 = *(ebx + 0x4c)

if (&var_30 u>= eax_29 || ecx_16 u> &var_30)
    if (eax_29 == *(ebx + 0x54))
        struct sealengine::CPolyMesh::VTable*** var_48_15 = ecx_16
        sub_412f20(ebx + 0x4c)
    
    struct sealengine::CPolyMesh::VTable*** eax_33 = *(ebx + 0x50)
    
    if (eax_33 != 0)
        *eax_33 = ebp_1
else
    if (eax_29 == *(ebx + 0x54))
        struct sealengine::CPolyMesh::VTable*** var_48_13 = ecx_16
        sub_412f20(ebx + 0x4c)
    
    int32_t* ecx_18 = *(ebx + 0x50)
    
    if (ecx_18 != 0)
        *ecx_18 = *(*(ebx + 0x4c) + ((&var_30 - ecx_16) s>> 2 << 2))

*(ebx + 0x50) += 4
ebx.b = 1
label_57c7a3:
int32_t** ecx_20 = var_1c
sub_4200d0(&var_1c, &arg_4, *ecx_20, ecx_20)
j__free(var_1c)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
