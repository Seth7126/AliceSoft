// 函数: sub_6e911b
// 地址: 0x6e911b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
int32_t var_32c = ebx

if (IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE) != 0)
    trap(0xd)

data_7fc264 = 0
uint32_t var_328[0x8][0x4]
uint32_t (* eax_1)[0x4]
int32_t ecx_1
int32_t edx
eax_1, ecx_1, edx = _memset(&var_328, 0, 0x2cc)
bool p = unimplemented  {add esp, 0xc}
bool a = unimplemented  {add esp, 0xc}
uint32_t (* var_278)[0x4] = eax_1
int32_t var_27c = ecx_1
int32_t var_280 = edx
int32_t var_284 = ebx
int32_t var_288 = 0
int32_t edi
int32_t var_28c = edi
int16_t ss
int16_t var_260 = ss
int16_t cs
int16_t var_26c = cs
int16_t ds
int16_t var_290 = ds
int16_t es
int16_t var_294 = es
int16_t fs
int16_t var_298 = fs
int16_t gs
int16_t var_29c = gs
int32_t var_33c
int32_t __saved_esi
bool d
int32_t var_334 = (add_overflow(&var_33c, 0xc) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&__saved_esi s< 0 ? 1 : 0) << 7 | (&var_33c == 0xfffffff4 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_33c u>= 0xfffffff4 ? 1 : 0)
int32_t var_268 = var_334
void* const __return_addr_1 = __return_addr
__builtin_memcpy(&var_328, "\x01\x00\x01\x00", 4)
int32_t ebp
int32_t var_274 = ebp
int32_t var_5c
_memset(&var_5c, 0, 0x50)
var_5c = 0x40000015
int32_t var_58 = 1
void* const __return_addr_2 = __return_addr
int32_t ebx_1 = IsDebuggerPresent() - 1
char ebx_2 = (neg.d(ebx_1)).b
EXCEPTION_POINTERS ExceptionInfo
ExceptionInfo.ExceptionRecord = &var_5c
ExceptionInfo.ContextRecord = &var_328
SetUnhandledExceptionFilter(nullptr)
int32_t result = UnhandledExceptionFilter(&ExceptionInfo)

if (result == 0)
    uint32_t eax_6 = zx.d(sbb.b(ebx_2, ebx_2, ebx_1 != 0) + 1)
    int32_t eax_7 = neg.d(eax_6)
    result = sbb.d(eax_7, eax_7, eax_6 != 0)
    data_7fc264 &= result

return result
