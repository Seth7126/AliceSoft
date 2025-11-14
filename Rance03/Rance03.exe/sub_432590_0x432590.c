// 函数: sub_432590
// 地址: 0x432590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b562b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_10 = arg1
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_75d4b8

if (ecx != 0)
    int32_t __saved_esi
    (*(*(ecx + 0x84) + 4))(__security_cookie ^ &__saved_esi)
    data_75d4b8 = 0

struct IWindow::dpvariable::CWindow::VTable** eax_4 = sub_69adc6(0x9c0)
struct IWindow::dpvariable::CWindow::VTable** var_10_1 = eax_4
int32_t var_4 = 0
struct dpvariable::CWindow::dpvariable::CApp::VTable** result

if (eax_4 == 0)
    result = nullptr
else
    result = sub_425a70(eax_4)

data_75d4b8 = result
result[0x23] = arg1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
