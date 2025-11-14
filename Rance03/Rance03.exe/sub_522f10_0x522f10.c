// 函数: sub_522f10
// 地址: 0x522f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_10
int32_t* arg_4
sub_42f3d0(arg1 + 4, &var_10, &arg_4)
int32_t* eax = var_10

if (eax != *(arg1 + 4))
    void* ecx_6 = eax[5]
    
    if (ecx_6 != 0)
        if (sub_5217e0(ecx_6, arg1 + 4, arg2, arg3) != 0)
            return true
        
        sub_64b530("Direct3D")
        enum MESSAGEBOX_RESULT eax_8
        eax_8.b = 0
        return eax_8
else
    struct chipmunk::CDXSprite::VTable** eax_1 = sub_69adc6(0xe8)
    struct chipmunk::CDXSprite::VTable** esi_1
    
    if (eax_1 == 0)
        esi_1 = nullptr
    else
        esi_1 = sub_521580(eax_1, *(arg1 + 0x38))
    
    bool eax_3
    int32_t ecx_3
    eax_3, ecx_3 = sub_5217e0(esi_1, arg1 + 4, arg2, arg3)
    
    if (eax_3 != 0)
        var_10 = arg_4
        uint32_t var_1c_3 = zx.d(data_75dd2b)
        struct chipmunk::CDXSprite::VTable** var_c_1 = esi_1
        int32_t** var_20_2 = &var_10
        int32_t** var_8
        sub_44f3e0(arg1 + 4, &var_8, ecx_3)
        return true
    
    sub_64b530("Direct3D")
    
    if (esi_1 != 0)
        (*esi_1)->vFunc_0(1)

eax.b = 0
return eax
