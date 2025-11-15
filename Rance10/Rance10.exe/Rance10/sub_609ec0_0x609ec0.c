// 函数: sub_609ec0
// 地址: 0x609ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742c09
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFileObjType::sys43vm::CObjType::VTable** esi = nullptr
int32_t var_1c = 0
int32_t ecx = 0
int32_t var_2c = 0
struct IDebugFileObjType::sys43vm::CObjType::VTable** var_28 = nullptr
int32_t var_24 = 0
void* eax_3 = arg4
int32_t i = 0
int32_t var_8_1 = 0

if (*(eax_3 + 0x4c) s> 0)
    int32_t ebx_1 = 0
    
    do
        void* eax_4 = *(eax_3 + 0x60)
        
        if (*(eax_4 + ebx_1 + 0x34) != 0)
            if (esi == ecx)
                sub_600200(&var_2c, 1)
                esi = var_28
            
            struct IDebugFileObjType::sys43vm::CObjType::VTable** var_14_2 = esi
            struct IDebugFileObjType::sys43vm::CObjType::VTable** var_20_1 = esi
            var_8_1.b = 1
            
            if (esi != 0)
                sub_600520(esi, eax_4 + 0x30 + ebx_1)
            
            var_8_1.b = 0
            esi = &esi[6]
            ecx = var_24
            var_28 = esi
        
        eax_3 = arg4
        i += 1
        ebx_1 += 0x70
    while (i s< *(eax_3 + 0x4c))

sub_609fa0(arg1, arg2, arg3, &var_2c)
sub_6001a0(&var_2c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
