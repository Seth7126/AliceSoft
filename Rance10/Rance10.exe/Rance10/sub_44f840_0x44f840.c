// 函数: sub_44f840
// 地址: 0x44f840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_2 = arg1
int32_t* ecx = *(arg1 + 0x14)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x14) = 0

int32_t* ecx_1 = *(arg1 + 0x18)

if (ecx_1 != 0)
    (**ecx_1)(1)
    *(arg1 + 0x18) = 0

struct common::SuicideRefCounter<class IGraphPlugin>::chipmunk::CGraphPlugin::VTable** eax_3 =
    sub_6e810c(0x10)
int32_t* ecx_2 = data_7fcb88
struct common::SuicideRefCounter<class IGraphPlugin>::chipmunk::CGraphPlugin::VTable** esi = eax_3
struct common::SuicideRefCounter<class IGraphPlugin>::chipmunk::CGraphPlugin::VTable** var_4 = esi
esi[1] = 1
*esi = &chipmunk::CGraphPlugin::`vftable'{for `common::SuicideRefCounter<class IGraphPlugin>'}
esi[2] = arg1
esi[3] = 0
*(arg1 + 0x14) = esi

if (ecx_2 != 0)
    if (esi[3] != 0)
    label_44f8d0:
        
        if ((*(esi[3]->vFunc_0 + 0x38))(esi).b != 0)
            struct chipmunk::CSceneView::VTable** eax_9 = sub_6e810c(0x84)
            struct chipmunk::CSceneView::VTable** var_4_1 = eax_9
            *eax_9 = &chipmunk::CSceneView::`vftable'
            eax_9[1].b = 0
            sub_451c00(&eax_9[2])
            sub_451c00(&eax_9[0x11])
            eax_9[0x20] = 0
            *(arg1 + 0x18) = eax_9
            sub_450240(eax_9)
            struct 
                common::SuicideRefCounter<class IViewTransition>::viewtrans::CDXTransition::VTable**
                 eax_10 = sub_64a0c0()
            eax_9[0x20] = eax_10
            eax_10.b = eax_10 != 0
            return eax_10
    else
        eax_3 = (**ecx_2)(0x75dd38)
        esi[3] = eax_3
        
        if (eax_3 != 0 && (*eax_3)->vFunc_3().b != 0)
            goto label_44f8d0

eax_3.b = 0
return eax_3
