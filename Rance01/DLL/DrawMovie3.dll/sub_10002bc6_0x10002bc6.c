// 函数: sub_10002bc6
// 地址: 0x10002bc6
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

bool p = unimplemented  {sub esp, 0x328}
bool a = unimplemented  {sub esp, 0x328}
data_10021b30 = arg1
data_10021b2c = arg3
data_10021b28 = arg2
int32_t entry_ebx
data_10021b24 = entry_ebx
data_10021b20 = arg5
data_10021b1c = arg6
int16_t ss
data_10021b48 = ss
int16_t cs
data_10021b3c = cs
int16_t ds
data_10021b18 = ds
int16_t es
data_10021b14 = es
int16_t fs
data_10021b10 = fs
int16_t gs
data_10021b0c = gs
int32_t var_32c
int32_t var_4
bool d
int32_t var_330 = (add_overflow(&var_4, 0xfffffcd8) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_32c s< 0 ? 1 : 0) << 7 | (&var_4 == 0x328 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&var_4 u< 0x328 ? 1 : 0)
data_10021b40 = var_330
data_10021b34 = arg4
data_10021b38 = __return_addr
void arg_4
data_10021b44 = &arg_4
data_10021a80 = 0x10001
data_10021a34 = data_10021b38
data_10021a28 = 0xc0000409
data_10021a2c = 1
uint32_t __security_cookie_1 = __security_cookie
int32_t var_328 = data_10020054
data_10021a78 = IsDebuggerPresent()
sub_10003d38()
SetUnhandledExceptionFilter(0)
UnhandledExceptionFilter(&data_1001a294)

if (data_10021a78 == 0)
    sub_10003d38()

TerminateProcess(GetCurrentProcess(), 0xc0000409)
noreturn
