// 函数: __call_reportfault
// 地址: 0x69fe27
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t eax_1 = __security_cookie ^ &var_4
int32_t edi
int32_t var_330_1 = edi

if (arg1 != 0xffffffff)
    int32_t var_334_1 = arg1
    sub_69f700()

int32_t var_324 = 0
int32_t var_320
int32_t ecx_2
int32_t edx
ecx_2, edx = _memset(&var_320, 0, 0x4c)
bool p = unimplemented  {add esp, 0xc}
bool a = unimplemented  {add esp, 0xc}
EXCEPTION_POINTERS var_32c
var_32c.ExceptionRecord = &var_324
int32_t var_2d4
var_32c.ContextRecord = &var_2d4
int32_t* var_224 = &var_2d4
int32_t var_228 = ecx_2
int32_t var_22c = edx
int32_t ebx
int32_t var_230 = ebx
int32_t esi
int32_t var_234 = esi
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
int32_t var_334_2 = (add_overflow(&var_33c, 0xc) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_330 s< 0 ? 1 : 0) << 7 | (&var_33c == 0xfffffff4 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_33c u>= 0xfffffff4 ? 1 : 0)
int32_t var_214 = var_334_2
void* const __return_addr_2 = __return_addr
var_2d4 = 0x10001
int32_t var_220 = var_4
var_324 = arg2
var_320 = arg3
void* const __return_addr_1 = __return_addr
BOOL eax_7 = IsDebuggerPresent()
int32_t result = ___crtUnhandledException(&var_32c)

if (result == 0 && eax_7 == 0 && arg1 != 0xffffffff)
    int32_t var_334_4 = arg1
    sub_69f700()

sub_69a5bc(eax_1 ^ &var_4)
return result
