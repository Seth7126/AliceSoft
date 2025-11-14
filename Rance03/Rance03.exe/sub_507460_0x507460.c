// 函数: sub_507460
// 地址: 0x507460
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    int32_t arg_4
    int32_t arg_8
    void* arg_18
    int32_t arg_1c
    sub_506c00(arg1, &arg_4, &arg_8, &arg_18, &arg_1c)
    
    if (sub_506b50(arg1, arg_4, arg_8, arg_18, arg_1c) == 0)
        int32_t* result = sub_5065e0(arg1)
        struct partsengine::CSpriteEngineWrapper::VTable ecx_2 = arg1
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x1c))(result, arg_4, arg_8, arg2, 0, 0, arg_18, arg_1c)
        
        result.b = 1
        return result

return 0
