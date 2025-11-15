// 函数: ___report_gsfailure
// 地址: 0x6e87b8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_7fc040 = eax
data_7fc03c = ecx
data_7fc038 = edx
int32_t entry_ebx
data_7fc034 = entry_ebx
int32_t entry_esi
data_7fc030 = entry_esi
int32_t entry_edi
data_7fc02c = entry_edi
int16_t ss
data_7fc058 = ss
int16_t cs
data_7fc04c = cs
int16_t ds
data_7fc028 = ds
int16_t es
data_7fc024 = es
int16_t fs
data_7fc020 = fs
int16_t gs
data_7fc01c = gs
bool d
data_7fc050 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
int32_t entry_ebp
data_7fc044 = entry_ebp
data_7fc048 = __return_addr
data_7fc054 = &stack_cookie
data_7fbf90 = 0x10001
data_7fbf4c = data_7fc048
data_7fbf40 = 0xc0000409
data_7fbf44 = 1
data_7fbf50 = 1
int32_t var_32c_1 = 4
data_7fbf54 = 2
int32_t var_32c_2 = 4
uint32_t __security_cookie_1 = __security_cookie
(&__security_cookie_1)[1] = data_7e106c
___raise_securityfailure(&data_752a40)
noreturn
