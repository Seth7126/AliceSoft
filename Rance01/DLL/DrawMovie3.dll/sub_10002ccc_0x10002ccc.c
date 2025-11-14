// 函数: sub_10002ccc
// 地址: 0x10002ccc
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ebp
int32_t var_4 = ebp
HANDLE eax_1 = __security_cookie ^ &var_4
HANDLE var_8 = eax_1
int32_t esi
int32_t var_330 = esi
uint32_t ecx
int32_t edx

if ((data_10020058 & 1) != 0)
    sub_10002e04(eax_1, edx, ecx, 0xa)
int32_t eax_2
int32_t ecx_2
int32_t edx_1
eax_2, ecx_2, edx_1 = sub_10006e21()

if (eax_2 != 0)
    eax_2, edx_1 = sub_10006e2e(0x16)
    ecx_2 = 0x16

char temp0 = data_10020058
bool p = unimplemented  {test byte [0x10020058], 0x2}
bool a = undefined
bool z = (temp0 & 2) == 0

if (not(z))
    int32_t var_224_1 = eax_2
    int32_t var_228_1 = ecx_2
    int32_t var_22c_1 = edx_1
    int32_t ebx
    int32_t var_230_1 = ebx
    int32_t var_234_1 = esi
    int32_t edi
    int32_t var_238_1 = edi
    int16_t ss
    int16_t var_20c_1 = ss
    int16_t cs
    int16_t var_218_1 = cs
    int16_t ds
    int16_t var_23c_1 = ds
    int16_t es
    int16_t var_240_1 = es
    int16_t fs
    int16_t var_244_1 = fs
    int16_t gs
    int16_t var_248_1 = gs
    bool d
    int32_t var_214_1 = (d ? 1 : 0) << 0xa | ((temp0 & 2) s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    int32_t var_2d4 = 0x10001
    void* const __return_addr_2 = __return_addr
    int32_t var_220_1 = var_4
    int32_t var_32c
    sub_10003d40(&var_32c, 0, 0x50)
    EXCEPTION_POINTERS ExceptionInfo
    ExceptionInfo.ExceptionRecord = &var_32c
    var_32c = 0x40000015
    void* const __return_addr_1 = __return_addr
    ExceptionInfo.ContextRecord = &var_2d4
    SetUnhandledExceptionFilter(nullptr)
    UnhandledExceptionFilter(&ExceptionInfo)

_quick_exit(3)
noreturn
