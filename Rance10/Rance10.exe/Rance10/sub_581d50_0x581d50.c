// 函数: sub_581d50
// 地址: 0x581d50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bf8c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
SRWLOCK* var_14 = arg1
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t __saved_ebp
SRWLOCK* var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK* ebx_1 = arg1
SRWLOCK* var_28 = &ebx_1[0x83]
__Smtx_lock_shared(var_28)
var_28 = &ebx_1[0x83]
__Smtx_unlock_shared(var_28)

if (ebx_1 != 0)
    void* esi_2 = &ebx_1[0x83]
    var_28 = esi_2
    __Smtx_lock_shared(var_28)
    var_28 = esi_2
    __Smtx_unlock_shared(var_28)
    var_28 = ebx_1
    DBI1::QueryNextMod(ebx_1, var_28)
    var_28 = esi_2
    __seterrormode(var_28)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = ebx_1
    
    if (ecx_1 != 0)
        ebx_1 = 0
        (*(*ecx_1 + 4))()
    
    var_28 = esi_2
    int32_t var_8_2 = 0xffffffff
    ___crtSetUnhandledExceptionFilter(var_28)

int32_t eax_3
eax_3.b = 0
char temp0 = ebx_1->__offset(0x204).b
ebx_1->__offset(0x204).b = 0
eax_3.b = temp0
var_28 = &ebx_1[0x80]
__Smtx_lock_shared(var_28)
var_28 = &ebx_1[0x80]
int32_t result = __Smtx_unlock_shared(var_28)
int32_t* esp_1 = &var_24

if (ebx_1 != 0)
    var_28 = &ebx_1[0x80]
    __Smtx_lock_shared(var_28)
    struct _RTL_SRWLOCK edi_4 = ebx_1
    var_28 = &ebx_1[0x80]
    __Smtx_unlock_shared(var_28)
    int32_t* i = *(edi_4 + 0x60)
    SRWLOCK** esp_2 = &var_24
    
    for (; i != *(edi_4 + 0x64); i = &i[1])
        void* edx_1
        edx_1.b = *(*i + 0x6d)
        
        if (edx_1.b != 0)
            var_28 = ebx_1
            sub_5640e0(ebx_1)
            int32_t var_2c_1 = 0x10
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::C2DDetection, void>::VTable
                ** eax_5 = sub_6e810c(0x10)
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::C2DDetection, void>::VTable
                ** var_14_1 = eax_5
            eax_5[1] = 1
            *eax_5 = &thread::CWorkerThread<class sealengine::C2DDetection, void>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
            eax_5[2] = ebx_1
            eax_5[3] = sub_564150
            struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::C2DDetection, void>::VTable
                ** var_2c_2 = eax_5
            sub_406700(ebx_1)
            esp_2 = &var_28
            break
    
    void* __offset(_RTL_SRWLOCK, 0x200) esi_5 = &ebx_1[0x80]
    *(esp_2 - 4) = esi_5
    __seterrormode()
    void* esp_4 = esp_2
    int32_t var_8_3 = 1
    struct _RTL_SRWLOCK ecx_7 = ebx_1
    
    if (ecx_7 != 0)
        int32_t edi_5 = *(ecx_7 + 4)
        *(ecx_7 + 4) -= 1
        int32_t edx_2 = *ecx_7
        *(esp_4 - 4) = edi_5 - 1
        (*edx_2)()
    
    *(esp_4 - 4) = esi_5
    result = ___crtSetUnhandledExceptionFilter()
    esp_1 = esp_4

fsbase->NtTib.ExceptionList = ExceptionList
*esp_1
esp_1[1]
esp_1[2]
esp_1[3]
return result
