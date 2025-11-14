// 函数: sub_5bf400
// 地址: 0x5bf400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9850
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (*(arg1 + 0xc) != 0)
    result = *(arg1 + 8)
else
    result = 0

int32_t edx = *(arg1 + 0xc)
void* ecx

if (edx != 0)
    ecx = *(arg1 + 8)
else
    ecx = nullptr

int32_t edi = edx + result
struct sys43vm::CMemoryImageAnalyser::VTable* const var_1c =
    &sys43vm::CMemoryImageAnalyser::`vftable'
void* var_18 = ecx
int32_t var_14 = edi
int32_t var_4 = 0

if (ecx + 8 u> edi || ecx + 0xc u> edi)
    result.b = 0
else
    uint32_t ebx_7 = ((zx.d(*(ecx + 0xb)) << 8 | zx.d(*(ecx + 0xa))) << 8 | zx.d(*(ecx + 9))) << 8
        | zx.d(*(ecx + 8))
    
    if (ecx + 0x10 u> edi)
        result.b = 0
    else
        void* var_18_1 = ecx + 0x10
        uint32_t ebp_7 =
            ((zx.d(*(ecx + 0xf)) << 8 | zx.d(*(ecx + 0xe))) << 8 | zx.d(*(ecx + 0xd))) << 8
            | zx.d(*(ecx + 0xc))
        
        if (ebp_7 u> *(arg1 + 0xc) - 0x10)
            result.b = 0
        else
            struct sys43vm::CZlibDecompressor::VTable* const var_24 =
                &sys43vm::CZlibDecompressor::`vftable'
            int32_t* var_20_1 = nullptr
            var_4.b = 1
            
            if (sub_451e10(&var_24).b == 0)
                ebx_7.b = 0
            else
                sub_403540(arg2, ebx_7)
                
                if (*(arg1 + 0xc) != 0)
                    result = *(arg1 + 8)
                else
                    result = 0
                
                int32_t esi_1 = *arg2
                
                if (var_20_1 == 0)
                    ebx_7.b = 0
                else if ((*(*var_20_1 + 8))(esi_1, *(arg2 + 4) - esi_1, result + 0x10, ebp_7).b
                        == 0)
                    ebx_7.b = 0
                else
                    ebx_7.b = 1
            
            var_4.b = 0
            
            if (var_20_1 != 0)
                (*(*var_20_1 + 4))(eax_2)
            
            result.b = ebx_7.b

fsbase->NtTib.ExceptionList = ExceptionList
return result
