// 函数: ___report_gsfailure
// 地址: 0x69ae54
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL eax
int32_t ecx
int32_t edx
eax, ecx, edx = IsProcessorFeaturePresent(PF_FASTFAIL_AVAILABLE)
bool p = unimplemented  {test eax, eax}
bool a = undefined
bool z = eax == 0

if (not(z))
    trap(0xd)

data_75c6e0 = eax
data_75c6dc = ecx
data_75c6d8 = edx
int32_t entry_ebx
data_75c6d4 = entry_ebx
int32_t entry_esi
data_75c6d0 = entry_esi
int32_t entry_edi
data_75c6cc = entry_edi
int16_t ss
data_75c6f8 = ss
int16_t cs
data_75c6ec = cs
int16_t ds
data_75c6c8 = ds
int16_t es
data_75c6c4 = es
int16_t fs
data_75c6c0 = fs
int16_t gs
data_75c6bc = gs
bool d
data_75c6f0 = (d ? 1 : 0) << 0xa | (eax s< 0 ? 1 : 0) << 7 | (z ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2
int32_t entry_ebp
data_75c6e4 = entry_ebp
data_75c6e8 = __return_addr
data_75c6f4 = &stack_cookie
data_75c630 = 0x10001
data_75c5ec = data_75c6e8
data_75c5e0 = 0xc0000409
data_75c5e4 = 1
data_75c5f0 = 1
int32_t var_32c_1 = 4
data_75c5f4 = 2
int32_t var_32c_2 = 4
uint32_t __security_cookie_1 = __security_cookie
(&__security_cookie_1)[1] = data_74a40c
___raise_securityfailure(&data_6d5420)
noreturn
