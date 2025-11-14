// 函数: sub_10001fbc
// 地址: 0x10001fbc
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = __security_cookie ^ &var_4
int32_t var_32c = 0
int32_t ebx
int32_t var_330_1 = ebx
int32_t var_328
int32_t ecx
int32_t edx
ecx, edx = sub_10003d40(&var_328, 0, 0x4c)
EXCEPTION_POINTERS ExceptionInfo
ExceptionInfo.ExceptionRecord = &var_32c
bool p = unimplemented  {add esp, 0xc}
bool a = unimplemented  {add esp, 0xc}
int32_t var_2d4
ExceptionInfo.ContextRecord = &var_2d4
int32_t* var_224 = &var_2d4
int32_t var_228 = ecx
int32_t var_22c = edx
int32_t var_230 = ebx
int32_t edi
int32_t var_238 = edi
int16_t ss
int16_t var_20c = ss
int16_t cs
int16_t var_218 = cs
int16_t ds
int16_t var_23c = ds
int16_t es
int16_t var_240 = es
int16_t fs
int16_t var_244 = fs
int16_t gs
int16_t var_248 = gs
int32_t var_33c
int32_t var_330
bool d
int32_t var_334 = (add_overflow(&var_33c, 0xc) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_330 s< 0 ? 1 : 0) << 7 | (&var_33c == 0xfffffff4 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_33c u>= 0xfffffff4 ? 1 : 0)
int32_t var_214 = var_334
var_2d4 = 0x10001
void* const __return_addr_2 = __return_addr
int32_t var_220 = var_4
var_32c = 0xc0000417
var_328 = 1
void* const __return_addr_1 = __return_addr
BOOL eax_3 = IsDebuggerPresent()
SetUnhandledExceptionFilter(0)

if (UnhandledExceptionFilter(&ExceptionInfo) == 0 && eax_3 == 0)
    sub_10003d38()

TerminateProcess(GetCurrentProcess(), 0xc0000417)
noreturn
