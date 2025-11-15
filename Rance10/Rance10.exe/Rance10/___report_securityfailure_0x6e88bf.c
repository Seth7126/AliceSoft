// 函数: ___report_securityfailure
// 地址: 0x6e88bf
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
data_7fc030 = arg2
data_7fc02c = arg3
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
data_7fc044 = arg1
data_7fc048 = __return_addr
int32_t arg_4
data_7fc054 = &arg_4
data_7fbf4c = data_7fc048
data_7fbf40 = 0xc0000409
data_7fbf44 = 1
data_7fbf50 = 1
int32_t var_324_1 = 4
data_7fbf54 = arg_4
___raise_securityfailure(&data_752a40)
noreturn
