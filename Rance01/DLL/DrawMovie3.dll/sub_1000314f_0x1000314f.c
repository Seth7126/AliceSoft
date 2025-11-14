// 函数: sub_1000314f
// 地址: 0x1000314f
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t __saved_ebp_2 = 0xc
int32_t var_8 = 0x1001e368
int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_10004620
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t __security_cookie_1 = __security_cookie
int32_t var_8_5 = 0x1001e368 ^ __security_cookie_1
int32_t __saved_ebp
int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
int32_t* var_1c = &var_30
void* const var_34_2 = &data_1000315b
int32_t var_8_6 = 0xfffffffe
int32_t var_c = var_8_5
fsbase->NtTib.ExceptionList = &ExceptionList
HMODULE hModule = GetModuleHandleW(u"KERNEL32.DLL")

if (hModule == 0)
    hModule = sub_100042a7(u"KERNEL32.DLL")

*(arg1 + 0x5c) = 0x1001a9c8
*(arg1 + 0x14) = 1

if (hModule != 0)
    *(arg1 + 0x1f8) = GetProcAddress(hModule, "EncodePointer")
    *(arg1 + 0x1fc) = GetProcAddress(hModule, "DecodePointer")

*(arg1 + 0x70) = 1
*(arg1 + 0xc8) = 0x43
*(arg1 + 0x14b) = 0x43
*(arg1 + 0x68) = 0x10020548
sub_10007437(0xd)
int32_t var_8_1 = 0
InterlockedIncrement(*(arg1 + 0x68))
int32_t var_8_2 = 0xfffffffe
sub_10003224()
sub_10007437(0xc)
int32_t var_8_3 = 1
*(arg1 + 0x6c) = arg2

if (arg2 == 0)
    *(arg1 + 0x6c) = data_10020538

sub_100075b3(*(arg1 + 0x6c))
int32_t var_8_4 = 0xfffffffe
int32_t result = sub_1000322d()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_1 = &data_1000321d
return result
