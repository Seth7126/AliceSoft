// 函数: sub_64ac50
// 地址: 0x64ac50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b707b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEncodeCG::encodecg::CApp::VTable** var_10 = arg1
int32_t var_14 = __security_cookie ^ &var_10
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_43aa00(0x6db7f0, 0x700740) != 0)
    struct IEncodeCG::encodecg::CApp::VTable** eax_4 = sub_69adc6(0x10)
    var_10 = eax_4
    int32_t var_4 = 0
    
    if (eax_4 != 0)
        struct IEncodeCG::encodecg::CApp::VTable** result = sub_649e40(eax_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
