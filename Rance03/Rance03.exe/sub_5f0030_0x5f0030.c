// 函数: sub_5f0030
// 地址: 0x5f0030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cbdb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_18 =
    &fileimage::CFileImageAnalyser::`vftable'
char* edx = *arg2
char* var_14 = edx
int32_t ebp = arg2[1]
int32_t var_10 = ebp
void* edi = &edx[4]
int32_t var_4 = 0
int32_t ebx_7

if (edi u<= ebp)
    void* var_14_1 = edi
    ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)

void* result

if (edi u> ebp || ebx_7 s< 0)
label_5f02a3:
    result.b = 0
else
    int32_t* esi_1 = arg1 + 0x14
    int32_t* var_1c_1 = esi_1
    sub_5f05f0(esi_1, ebx_7)
    void* result_2 = nullptr
    
    if (ebx_7 s> 0)
        int32_t edx_1 = 0
        int32_t var_38_1 = 0
        
        do
            if (edi + 4 u> ebp)
                goto label_5f02a3
            
            result = zx.d(*edi)
            uint32_t ebx_13 =
                ((zx.d(*(edi + 3)) << 8 | zx.d(*(edi + 2))) << 8 | zx.d(*(edi + 1))) << 8
            edi += 4
            int32_t ebx_14 = ebx_13 | result
            void* var_14_2 = edi
            
            if (ebx_14 s< 0)
                goto label_5f02a3
            
            int32_t* esi_2 = *esi_1 + edx_1 + 4
            int32_t* var_24_1 = esi_2
            sub_5ef640(esi_2, ebx_14)
            void* result_1 = nullptr
            
            if (ebx_14 s> 0)
                int32_t ecx_4 = 0
                int32_t var_40_1 = 0
                
                do
                    void* edx_4 = *esi_2 + ecx_4
                    
                    if (edi + 4 u> ebp)
                        goto label_5f02a3
                    
                    *(edx_4 + 4) =
                        ((zx.d(*(edi + 3)) << 8 | zx.d(*(edi + 2))) << 8 | zx.d(*(edi + 1))) << 8
                        | zx.d(*edi)
                    void* ecx_12 = edi + 8
                    
                    if (ecx_12 u> ebp)
                        goto label_5f02a3
                    
                    edi = ecx_12 + 4
                    
                    if (edi u> ebp)
                        goto label_5f02a3
                    
                    void* var_14_3 = edi
                    int32_t ebx_21 = ((zx.d(*(ecx_12 + 3)) << 8 | zx.d(*(ecx_12 + 2))) << 8
                        | zx.d(*(ecx_12 + 1))) << 8 | zx.d(*ecx_12)
                    
                    if (ebx_21 s< 0)
                        goto label_5f02a3
                    
                    void* esi_4 = edx_4 + 8
                    void* var_2c_1 = esi_4
                    sub_5efbc0(esi_4, ebx_21)
                    arg2 = nullptr
                    
                    if (ebx_21 s> 0)
                        int32_t ecx_14 = 0
                        int32_t var_48_1 = 0
                        
                        while (true)
                            void* esi_6 = *esi_4 + ecx_14
                            
                            if (edi + 2 u> ebp)
                                goto label_5f02a3
                            
                            *(esi_6 + 4) = zx.d(zx.w(*(edi + 1)) << 8) | zx.d(*edi)
                            uint32_t var_34
                            
                            if (sub_468b70(&var_18, &var_34).b == 0)
                                goto label_5f02a3
                            
                            *(esi_6 + 8) = var_34
                            uint32_t var_30
                            
                            if (sub_468b20(&var_18, &var_30).b == 0)
                                goto label_5f02a3
                            
                            ebp = var_10
                            ecx_14 = var_48_1 + 0x10
                            edi += 2
                            *(esi_6 + 0xc) = var_30
                            result = arg2 + 1
                            var_48_1 = ecx_14
                            arg2 = result
                            
                            if (result s>= ebx_21)
                                break
                            
                            esi_4 = var_2c_1
                    
                    result = result_1 + 1
                    esi_2 = var_24_1
                    ecx_4 = var_40_1 + 0x14
                    result_1 = result
                    var_40_1 = ecx_4
                while (result s< ebx_14)
            
            result = result_2 + 1
            esi_1 = var_1c_1
            edx_1 = var_38_1 + 0x10
            result_2 = result
            var_38_1 = edx_1
        while (result s< ebx_7)
    
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
