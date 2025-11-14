// 函数: sub_507100
// 地址: 0x507100
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    int32_t arg_4
    int32_t arg_8
    void* arg_c
    int32_t arg_10
    sub_506c00(arg1, &arg_4, &arg_8, &arg_c, &arg_10)
    
    if (sub_506b50(arg1, arg_4, arg_8, arg_c, arg_10) == 0)
        int32_t* result = sub_5065e0(arg1)
        struct partsengine::CSpriteEngineWrapper::VTable ecx_2 = arg1
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 0x30))(result, arg_4, arg_8, arg_c, arg_10, arg2)
        
        result.b = 1
        return result

return 0
