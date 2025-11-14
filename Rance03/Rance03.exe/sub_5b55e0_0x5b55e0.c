// 函数: sub_5b55e0
// 地址: 0x5b55e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8f20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t result_1 = result
void* ebp = arg1
void* var_4c = ebp

if (ebp != result)
    void* ebx_1 = ebp + 0x38
    void* var_50_1 = ebx_1
    
    if (ebx_1 != result)
        do
            void** esi_1 = ebx_1 + 8
            void* var_58_1 = ebx_1
            struct sys43vm::CCallFuncCount::VTable* const var_48 =
                &sys43vm::CCallFuncCount::`vftable'
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            char var_40 = 0
            sub_401ff0(&var_40, esi_1, 0, 0xffffffff)
            int32_t var_4 = 0
            int32_t eax_5 = *(ebx_1 + 0x20)
            int32_t* var_24
            sub_5b5a00(&var_24, ebx_1 + 0x24)
            int32_t result_2 = *(ebx_1 + 0x34)
            int32_t edi_1 = *(ebx_1 + 0x30)
            int32_t var_18_1 = edi_1
            int32_t var_4_1 = 1
            
            if (sub_5b4020(&var_48, ebp) == 0)
                int32_t result_4 = result_2
                
                while (true)
                    esi_1 -= 0x38
                    int32_t eax_11
                    uint32_t edx_1
                    eax_11, edx_1 = __allmul(edi_1, result_4, 0x3e8, 0)
                    uint32_t ebx_2 = data_75d564
                    int32_t edi_2 = data_75d560
                    uint32_t eax_12
                    int32_t edx_2
                    eax_12, edx_2 = __alldiv(eax_11, edx_1, edi_2, ebx_2)
                    int32_t eax_13
                    uint32_t edx_3
                    eax_13, edx_3 = __allmul(esi_1[0xa], esi_1[0xb], 0x3e8, 0)
                    uint32_t eax_14
                    int32_t edx_4
                    eax_14, edx_4 = __alldiv(eax_13, edx_3, edi_2, ebx_2)
                    
                    if (edx_2 s< edx_4)
                        break
                    
                    if (edx_2 s<= edx_4 && eax_12 u<= eax_14)
                        break
                    
                    if (var_58_1 + 8 != esi_1)
                        sub_401ff0(var_58_1 + 8, esi_1, 0, 0xffffffff)
                    
                    *(var_58_1 + 0x20) = esi_1[6]
                    sub_5b5aa0(var_58_1 + 0x24, &esi_1[7])
                    edi_1 = var_18_1
                    *(var_58_1 + 0x30) = esi_1[0xa]
                    *(var_58_1 + 0x34) = esi_1[0xb]
                    var_58_1 = &esi_1[-2]
                    result_4 = result_2
                
                if (var_58_1 + 8 != &var_40)
                    sub_401ff0(var_58_1 + 8, &var_40, 0, 0xffffffff)
                
                *(var_58_1 + 0x20) = eax_5
                sub_5b5aa0(var_58_1 + 0x24, &var_24)
                ebx_1 = var_50_1
                ebp = var_4c
                *(var_58_1 + 0x30) = var_18_1
                result = result_2
                *(var_58_1 + 0x34) = result
            else
                int32_t result_3 = result_1
                sub_5b60f0(ebx_1 + 0x38, ebx_1, ebp, ebx_1 + 0x38)
                
                if (ebp + 8 != &var_40)
                    sub_401ff0(ebp + 8, &var_40, 0, 0xffffffff)
                
                *(ebp + 0x20) = eax_5
                sub_5b5aa0(ebp + 0x24, &var_24)
                *(ebp + 0x30) = var_18_1
                result = result_2
                *(ebp + 0x34) = result
            
            int32_t var_4_2 = 0xffffffff
            int32_t* esi_3 = var_24
            var_48 = &sys43vm::CCallFuncCount::`vftable'
            
            if (esi_3 != 0)
                int32_t var_20
                
                if (esi_3 != var_20)
                    do
                        (**esi_3)(0)
                        esi_3 = &esi_3[4]
                    while (esi_3 != var_20)
                    
                    esi_3 = var_24
                
                result = j__free(esi_3)
                var_24 = nullptr
                var_20 = 0
                int32_t var_1c_1 = 0
            
            if (var_2c_1 u>= 0x10)
                result = j__free(var_40.d)
            
            ebx_1 += 0x38
            var_50_1 = ebx_1
        while (ebx_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
