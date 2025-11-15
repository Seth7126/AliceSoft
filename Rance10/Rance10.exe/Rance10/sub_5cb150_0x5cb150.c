// 函数: sub_5cb150
// 地址: 0x5cb150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740630
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_20 = ebx
int32_t esi
int32_t var_24 = esi
int32_t edi
int32_t var_28 = edi
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct common::SuicideRefCounter<class IEXReaderList>::exfile::CEXReaderList::VTable** eax_3 =
    sub_46d290()
SRWLOCK* var_30 = &arg1[0x3c]
__seterrormode(var_30)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x38)

if (ecx != 0)
    *(arg1 + 0x38) = 0
    (*(*ecx + 4))()

int32_t var_8_2 = 0xffffffff
var_30 = &arg1[0x3c]
*(arg1 + 0x38) = eax_3
___crtSetUnhandledExceptionFilter(var_30)
var_30 = 0x2c
struct common::SuicideRefCounter<class IEXReader>::sealengine::CSealEXReader::VTable** eax_5 =
    sub_6e810c(var_30)
struct common::SuicideRefCounter<class IEXReader>::sealengine::CSealEXReader::VTable** var_18 =
    eax_5
int32_t var_8_3 = 1
var_30 = &arg1[4]
struct common::SuicideRefCounter<class IEXReader>::sealengine::CSealEXReader::VTable** eax_6 =
    sub_5d4a30(eax_5, var_30)
int32_t var_8_4 = 0xffffffff
var_30 = &arg1[0x44]
__seterrormode(var_30)
int32_t* ecx_3 = *(arg1 + 0x40)

if (ecx_3 != eax_6)
    int32_t var_8_5 = 2
    
    if (ecx_3 != 0)
        *(arg1 + 0x40) = 0
        (*(*ecx_3 + 4))()
    
    *(arg1 + 0x40) = eax_6
    int32_t var_8_6 = 3
    
    if (eax_6 != 0)
        (*eax_6)->vFunc_0()
    
    int32_t var_8_7 = 0xffffffff

var_30 = &arg1[0x44]
___crtSetUnhandledExceptionFilter(var_30)
int32_t* esp_1
int32_t* ebx_4
SRWLOCK* esi_9
void* edi_6

if (*arg1 == 0)
    var_30 = &arg1[0x3c]
    __Smtx_lock_shared(var_30)
    ebx_4 = *(arg1 + 0x38)
    var_30 = &arg1[0x3c]
    __Smtx_unlock_shared(var_30)
    edi_6 = &arg1[0x44]
    var_30 = edi_6
    __Smtx_lock_shared(var_30)
    esi_9 = *(arg1 + 0x40)
label_5cb2f6:
    var_30 = edi_6
    __Smtx_unlock_shared(var_30)
    int32_t eax_15 = *(*ebx_4 + 0x14)
    var_30 = esi_9
    esp_1 = &var_30
    
    if (eax_15(var_30) != 0 && sub_5cb390(arg1) != 0)
        __Smtx_lock_shared(&arg1[0x3c])
        int32_t* esi_13 = *(arg1 + 0x38)
        __Smtx_unlock_shared(&arg1[0x3c])
        sub_492a50(1, esi_13)
        int32_t* result
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
else
    var_30 = &arg1[0x44]
    __Smtx_lock_shared(var_30)
    void* esi_3 = *(arg1 + 0x40)
    var_30 = &arg1[0x44]
    __Smtx_unlock_shared(var_30)
    sub_5d4d60(esi_3)
    var_30 = &arg1[0x3c]
    __Smtx_lock_shared(var_30)
    int32_t* ebx_2 = *(arg1 + 0x38)
    var_30 = &arg1[0x3c]
    __Smtx_unlock_shared(var_30)
    var_30 = &arg1[0x44]
    __Smtx_lock_shared(var_30)
    SRWLOCK* esi_6 = *(arg1 + 0x40)
    var_30 = &arg1[0x44]
    __Smtx_unlock_shared(var_30)
    int32_t eax_10 = *(*ebx_2 + 0x14)
    var_30 = esi_6
    esp_1 = &var_2c
    
    if (eax_10(var_30) != 0)
        var_30 = 0x2c
        struct common::SuicideRefCounter<class IEXReader>::sealengine::CSealEXReader::VTable** 
            eax_12 = sub_6e810c(var_30)
        struct common::SuicideRefCounter<class IEXReader>::sealengine::CSealEXReader::VTable** 
            var_18_1 = eax_12
        int32_t var_8_8 = 4
        var_30 = sub_5d4900(eax_12)
        int32_t var_8_9 = 0xffffffff
        sub_5866d0(&arg1[0x48], var_30)
        var_30 = &arg1[0x3c]
        __Smtx_lock_shared(var_30)
        ebx_4 = *(arg1 + 0x38)
        var_30 = &arg1[0x3c]
        __Smtx_unlock_shared(var_30)
        edi_6 = &arg1[0x4c]
        var_30 = edi_6
        __Smtx_lock_shared(var_30)
        esi_9 = *(arg1 + 0x48)
        goto label_5cb2f6
fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return 0
