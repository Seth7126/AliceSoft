// 函数: sub_4773b0
// 地址: 0x4773b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e1fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = data_7fcc74

for (int32_t eax_3 = data_7fcc78; i != eax_3; i = &i[1])
    if (*i == 0)
        if (i == eax_3)
            break
        
        struct 
            common::SuicideRefCounter<class common::detail::EmptyClass>::exfile::CEXWriter::VTable**
             eax_12 = sub_6e810c(0x7c)
        struct 
            common::SuicideRefCounter<class common::detail::EmptyClass>::exfile::CEXWriter::VTable**
             var_14_2 = eax_12
        int32_t var_8_3 = 0
        _memset(eax_12, 0, 0x7c)
        eax_12[1] = 1
        void* var_18_1 = &eax_12[2]
        *eax_12 = &exfile::CEXWriter::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
        eax_12[2] = &exfile::CDefineDataFactory::`vftable'
        void* var_18_2 = &eax_12[3]
        eax_12[3] = 0
        eax_12[4] = 0
        eax_12[3] = sub_4321d0()
        sub_463110(&eax_12[5])
        *i = eax_12
        fsbase->NtTib.ExceptionList = ExceptionList
        return (i - data_7fcc74) s>> 2

struct common::SuicideRefCounter<class common::detail::EmptyClass>::exfile::CEXWriter::VTable** 
    eax_4 = sub_6e810c(0x7c)
struct common::SuicideRefCounter<class common::detail::EmptyClass>::exfile::CEXWriter::VTable** 
    var_18 = eax_4
int32_t var_8_1 = 1
_memset(eax_4, 0, 0x7c)
eax_4[1] = 1
struct exfile::CDefineDataFactory::VTable** var_14 = &eax_4[2]
*eax_4 =
    &exfile::CEXWriter::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
eax_4[2] = &exfile::CDefineDataFactory::`vftable'
void* var_14_1 = &eax_4[3]
eax_4[3] = 0
eax_4[4] = 0
eax_4[3] = sub_4321d0()
sub_463110(&eax_4[5])
int32_t var_8_2 = 0xffffffff
void** eax_7 = data_7fcc78

if (eax_7 == data_7fcc7c)
    void* var_2c_1 = &eax_4[5]
    sub_477a50()
    eax_7 = data_7fcc78

if (eax_7 != 0)
    *eax_7 = eax_4
    eax_7 = data_7fcc78

data_7fcc78 = &eax_7[1]
fsbase->NtTib.ExceptionList = ExceptionList
return ((&eax_7[1] - data_7fcc74) s>> 2) - 1
