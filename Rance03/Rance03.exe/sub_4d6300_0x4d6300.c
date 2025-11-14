// 函数: sub_4d6300
// 地址: 0x4d6300
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bf8c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct partsengine::CSpriteEngineWrapper::VTable* const arg_8
struct partsengine::CSpriteEngineWrapper::VTable* ebp = arg_8
struct partsengine::CGraph::VTable* const var_4c = &partsengine::CGraph::`vftable'

if (ebp s<= 0)
    ebp = 1

int32_t var_4 = 0
int32_t* edi = nullptr

if (sub_43aa00(0x6e2330, 0x6dcf50) != 0)
    edi = data_75d4dc

int32_t* var_48 = edi
struct partsengine::CSpriteEngineWrapper::VTable* ebx

if (edi != 0)
    arg_8 = &partsengine::CSpriteEngineWrapper::`vftable'
    var_4.b = 1
    struct partsengine::CSpriteEngineWrapper::VTable* esi_1 = data_75d514
    
    if (esi_1 != 0)
        if (sub_5ed1f0(esi_1) != 0)
            ebx = (*(*esi_1 + 0x18))(eax_2)
        else
            ebx = nullptr
        
        esi_1 = data_75d514
    else
        ebx = nullptr
    
    arg_8 = &partsengine::CSpriteEngineWrapper::`vftable'
    var_4.b = 2
    
    if (esi_1 != 0)
        if (sub_5ed1f0(esi_1) != 0)
            esi_1 = (*(*esi_1 + 0x1c))(eax_2)
        else
            esi_1 = nullptr
    
    var_4.b = 0
    arg_8 = sub_44f0e0(data_75d4cc + 0x29c)
    struct partsengine::CLLSprite::VTable* var_44
    sub_505680(&var_44)
    var_4.b = 3
    
    if (ebx s> 0)
        sub_5076e0(&var_44, ebx, esi_1)
    
    int32_t var_68_2 = 0
    int32_t var_6c_2 = 0
    int32_t var_70_1 = 0
    int32_t var_74_1 = 0
    struct partsengine::CSpriteEngineWrapper::VTable* var_78_1 = esi_1
    struct partsengine::CSpriteEngineWrapper::VTable* var_7c_1 = ebx
    int32_t var_80_1 = 0
    int32_t var_84_1 = 0
    sub_5072d0(&var_44)
    void* var_40
    
    if (var_40 != 0)
        *(var_40 + 0x2c) = 0
    
    struct partsengine::CSpriteEngineWrapper::VTable* const var_50 =
        &partsengine::CSpriteEngineWrapper::`vftable'
    var_4.b = 4
    sub_44e100(arg_8)
    var_4.b = 3
    struct partsengine::CSpriteEngineWrapper::VTable* const* ecx_10 = &arg_8
    var_50 = 1
    int32_t temp0_1 = divs.dp.d(sx.q(esi_1 * ebp), ebx)
    arg_8 = temp0_1
    
    if (temp0_1 s<= 1)
        ecx_10 = &var_50
    
    arg_8 = *ecx_10
    struct partsengine::CLLSprite::VTable* var_28
    sub_505680(&var_28)
    var_4.b = 5
    
    if (ebp s> 0)
        sub_5076e0(&var_28, ebp, arg_8)
    
    struct partsengine::CSpriteEngineWrapper::VTable* var_24
    
    if (var_24 != 0)
        var_50 = &partsengine::CSpriteEngineWrapper::`vftable'
        var_4.b = 6
        struct partsengine::CSpriteEngineWrapper::VTable var_68_5 = var_24
        var_50 = sub_44e630(data_75d4cc + 0x288)
        var_4.b = 5
    else
        var_50 = var_24
    
    int32_t eax_18 = sub_506650(&var_44)
    (*(*edi + 0x3c))(var_50, 0, 0, ebp, arg_8, eax_18, 0, 0, ebx, esi_1)
    arg_8 = &partsengine::CSpriteEngineWrapper::`vftable'
    var_4.b = 7
    struct partsengine::CSpriteEngineWrapper::VTable eax_20
    
    eax_20 = var_24 != 0 ? var_24 : 0xffffffff
    
    sub_514180(eax_20, arg1)
    var_4.b = 3
    ebx.b = 1
    sub_505790(&var_28)
    var_4.b = 0
    sub_505790(&var_44)
else
    sub_64b530(0x6e191c)
    ebx.b = 0

int32_t var_4_1 = 0xffffffff

if (edi != 0)
    (*(*edi + 4))(eax_2)

enum MESSAGEBOX_RESULT result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
