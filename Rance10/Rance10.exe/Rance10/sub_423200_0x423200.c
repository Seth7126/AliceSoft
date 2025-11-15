// 函数: sub_423200
// 地址: 0x423200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpvariable::CController::VTable** 
    var_4 = arg1
struct common::SuicideRefCounter<class IJaffaDebugPlugin>::dpvariable::CController::VTable** ecx =
    data_7fcb38

if (ecx == 0)
    ecx = sub_6e810c(0x18)
    var_4 = ecx
    data_7fcb38 = ecx
    ecx[1] = 1
    *ecx = &
        dpvariable::CController::`vftable'{for `common::SuicideRefCounter<class IJaffaDebugPlugin>'}
    ecx[2] = arg1
    ecx[3] = arg2
    ecx[4] = 0
    ecx[5] = 0

(*ecx)->vFunc_0()
return data_7fcb38
