// 函数: sub_62c1c0
// 地址: 0x62c1c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
std::_Locinfo::_Locinfo_dtor(arg1)
int32_t eax_3 = arg1[0xb]

if (eax_3 != 0)
    _free(eax_3)

arg1[0xb] = 0
int32_t eax_4 = arg1[9]

if (eax_4 != 0)
    _free(eax_4)

arg1[9] = 0
int32_t eax_5 = arg1[7]

if (eax_5 != 0)
    _free(eax_5)

arg1[7] = 0
int32_t eax_6 = arg1[5]

if (eax_6 != 0)
    _free(eax_6)

arg1[5] = 0
int32_t eax_7 = arg1[3]

if (eax_7 != 0)
    _free(eax_7)

arg1[3] = 0
int32_t eax_8 = arg1[1]

if (eax_8 != 0)
    _free(eax_8)

arg1[1] = 0
int32_t result = std::_Lockit::~_Lockit(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
