// 函数: ?__ExceptionPtrRethrow@@YAXPBX@Z
// 地址: 0x6d555f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t eax = sub_6d5077(arg1)
int32_t* var_8 = &var_4
int32_t var_c = __security_cookie ^ &var_8
int32_t edi
int32_t var_74 = edi

if (eax == 0)
    void var_68
    std::bad_exception::bad_exception(&var_68)
    sub_70021b(&var_68, 0x7dbcb0)
    noreturn

uint32_t dwExceptionCode_1
__builtin_memcpy(&dwExceptionCode_1, eax, 0x50)
uint32_t dwExceptionCode = dwExceptionCode_1
uint32_t nNumberOfArguments_1
uint32_t nNumberOfArguments = nNumberOfArguments_1
uint32_t arguments

if (dwExceptionCode != 0xe06d7363 || nNumberOfArguments != 3)
label_6d5440:
    
    if (nNumberOfArguments u> 0xf)
        nNumberOfArguments = 0xf
        int32_t var_4c = 0xf
else
    uint32_t arguments_1 = arguments
    
    if (arguments_1 == 0x19930520 || arguments_1 == 0x19930521 || arguments_1 == 0x19930522
            || arguments_1 == 0x1994000)
        int32_t var_40
        void* eax_3 = DecodePointer(var_40)
        char* var_44
        int32_t* ecx_3
        
        if (var_44 != 0 && eax_3 != 0)
            ecx_3 = *(eax_3 + 0xc)
        
        if (var_44 == 0 || eax_3 == 0 || ecx_3 == 0 || *ecx_3 s<= 0)
            _terminate()
            noreturn
        
        void* var_40_1 = eax_3
        char* esi_1 = *(*(eax_3 + 0xc) + 4)
        __alloca_probe_16(*(esi_1 + 0x14))
        __ExceptionPtr::_CallCopyCtor(&var_74, var_44, *(esi_1 + 0x14), esi_1)
        nNumberOfArguments = nNumberOfArguments_1
        dwExceptionCode = dwExceptionCode_1
        int32_t* var_44_1 = &var_74
        goto label_6d5440

uint32_t dwExceptionFlags
RaiseException(dwExceptionCode, dwExceptionFlags, nNumberOfArguments, &arguments)
noreturn
