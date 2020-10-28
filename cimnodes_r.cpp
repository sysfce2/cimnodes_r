//This file is automatically generated by generator.lua from https://github.com/cimgui/cimnodes_r
//based on ImNodes.h file version XXX from https://github.com/rokups/ImNodes
#include "imgui.h"
#include "imgui_internal.h"
#include "./ImNodes/ImNodesEz.h"
#include "cimnodes_r.h"



CIMGUI_API CanvasState* CanvasState_CanvasState(void)
{
    return IM_NEW(CanvasState)();
}
CIMGUI_API void CanvasState_destroy(CanvasState* self)
{
    IM_DELETE(self);
}
CIMGUI_API void ImNodes_BeginCanvas(CanvasState* canvas)
{
    return ImNodes::BeginCanvas(canvas);
}
CIMGUI_API void ImNodes_EndCanvas()
{
    return ImNodes::EndCanvas();
}
CIMGUI_API bool ImNodes_BeginNode(void* node_id,ImVec2* pos,bool* selected)
{
    return ImNodes::BeginNode(node_id,pos,selected);
}
CIMGUI_API void ImNodes_EndNode()
{
    return ImNodes::EndNode();
}
CIMGUI_API void ImNodes_AutoPositionNode(void* node_id)
{
    return ImNodes::AutoPositionNode(node_id);
}
CIMGUI_API bool ImNodes_GetNewConnection(void** input_node,const char** input_slot_title,void** output_node,const char** output_slot_title)
{
    return ImNodes::GetNewConnection(input_node,input_slot_title,output_node,output_slot_title);
}
CIMGUI_API bool ImNodes_GetPendingConnection(void** node_id,const char** slot_title,int* slot_kind)
{
    return ImNodes::GetPendingConnection(node_id,slot_title,slot_kind);
}
CIMGUI_API bool ImNodes_Connection(void* input_node,const char* input_slot,void* output_node,const char* output_slot)
{
    return ImNodes::Connection(input_node,input_slot,output_node,output_slot);
}
CIMGUI_API CanvasState* ImNodes_GetCurrentCanvas()
{
    return ImNodes::GetCurrentCanvas();
}
CIMGUI_API int ImNodes_InputSlotKind(int kind)
{
    return ImNodes::InputSlotKind(kind);
}
CIMGUI_API int ImNodes_OutputSlotKind(int kind)
{
    return ImNodes::OutputSlotKind(kind);
}
CIMGUI_API bool ImNodes_IsInputSlotKind(int kind)
{
    return ImNodes::IsInputSlotKind(kind);
}
CIMGUI_API bool ImNodes_IsOutputSlotKind(int kind)
{
    return ImNodes::IsOutputSlotKind(kind);
}
CIMGUI_API bool ImNodes_BeginSlot(const char* title,int kind)
{
    return ImNodes::BeginSlot(title,kind);
}
CIMGUI_API bool ImNodes_BeginInputSlot(const char* title,int kind)
{
    return ImNodes::BeginInputSlot(title,kind);
}
CIMGUI_API bool ImNodes_BeginOutputSlot(const char* title,int kind)
{
    return ImNodes::BeginOutputSlot(title,kind);
}
CIMGUI_API void ImNodes_EndSlot()
{
    return ImNodes::EndSlot();
}
CIMGUI_API bool ImNodes_IsSlotCurveHovered()
{
    return ImNodes::IsSlotCurveHovered();
}
CIMGUI_API bool ImNodes_IsConnectingCompatibleSlot()
{
    return ImNodes::IsConnectingCompatibleSlot();
}
CIMGUI_API bool ImNodes_Ez_BeginNode(void* node_id,const char* title,ImVec2* pos,bool* selected)
{
    return ImNodes::Ez::BeginNode(node_id,title,pos,selected);
}
CIMGUI_API void ImNodes_Ez_EndNode()
{
    return ImNodes::Ez::EndNode();
}
CIMGUI_API void ImNodes_Ez_InputSlots(const SlotInfo* slots,int snum)
{
    return ImNodes::Ez::InputSlots(slots,snum);
}
CIMGUI_API void ImNodes_Ez_OutputSlots(const SlotInfo* slots,int snum)
{
    return ImNodes::Ez::OutputSlots(slots,snum);
}



