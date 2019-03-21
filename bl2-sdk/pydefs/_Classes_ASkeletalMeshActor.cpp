#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActor(py::object m)
{
    py::class_< ASkeletalMeshActor,  AActor   >(m, "ASkeletalMeshActor")
        .def_readwrite("VfTable_IIFaceFXActor", &ASkeletalMeshActor::VfTable_IIFaceFXActor)
        .def_readwrite("SkeletalMeshComponent", &ASkeletalMeshActor::SkeletalMeshComponent)
        .def_readwrite("LightEnvironment", &ASkeletalMeshActor::LightEnvironment)
        .def_readwrite("FacialAudioComp", &ASkeletalMeshActor::FacialAudioComp)
        .def_readwrite("ReplicatedMesh", &ASkeletalMeshActor::ReplicatedMesh)
        .def_readwrite("ReplicatedMaterial0", &ASkeletalMeshActor::ReplicatedMaterial0)
        .def_readwrite("ReplicatedMaterial1", &ASkeletalMeshActor::ReplicatedMaterial1)
        .def_readwrite("ControlTargets", &ASkeletalMeshActor::ControlTargets)
        .def_readwrite("InterpGroupList", &ASkeletalMeshActor::InterpGroupList)
        .def_readwrite("SavedAnimSeqName", &ASkeletalMeshActor::SavedAnimSeqName)
        .def_readwrite("SavedCurrentTime", &ASkeletalMeshActor::SavedCurrentTime)
        .def("StaticClass", &ASkeletalMeshActor::StaticClass, py::return_value_policy::reference)
        .def("eventSetAudioCueOpenedByFaceFX", &ASkeletalMeshActor::eventSetAudioCueOpenedByFaceFX)
        .def("eventGetFaceFXAsset", &ASkeletalMeshActor::eventGetFaceFXAsset, py::return_value_policy::reference)
        .def("PlayFaceAnimation", &ASkeletalMeshActor::PlayFaceAnimation)
        .def("eventCreateForceField", &ASkeletalMeshActor::eventCreateForceField)
        .def("SkelMeshActorOnParticleSystemFinished", &ASkeletalMeshActor::SkelMeshActorOnParticleSystemFinished)
        .def("eventPlayParticleEffect", &ASkeletalMeshActor::eventPlayParticleEffect)
        .def("ApplyCheckpointRecord", &ASkeletalMeshActor::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ASkeletalMeshActor::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ASkeletalMeshActor::ShouldSaveForCheckpoint)
        .def("eventTakeDamage", &ASkeletalMeshActor::eventTakeDamage)
        .def("DoKismetAttachment", &ASkeletalMeshActor::DoKismetAttachment)
        .def("eventShutDown", &ASkeletalMeshActor::eventShutDown)
        .def("eventOnSetSkelControlTarget", &ASkeletalMeshActor::eventOnSetSkelControlTarget)
        .def("eventOnUpdatePhysBonesFromAnim", &ASkeletalMeshActor::eventOnUpdatePhysBonesFromAnim)
        .def("eventOnSetMesh", &ASkeletalMeshActor::eventOnSetMesh)
        .def("IsActorPlayingFaceFXAnim", &ASkeletalMeshActor::IsActorPlayingFaceFXAnim)
        .def("eventIGetActorFaceFXAsset", &ASkeletalMeshActor::eventIGetActorFaceFXAsset, py::return_value_policy::reference)
        .def("eventGetActorFaceFXAsset", &ASkeletalMeshActor::eventGetActorFaceFXAsset, py::return_value_policy::reference)
        .def("OnPlayFaceFXAnim", &ASkeletalMeshActor::OnPlayFaceFXAnim)
        .def("eventGetFaceFXAudioComponent", &ASkeletalMeshActor::eventGetFaceFXAudioComponent, py::return_value_policy::reference)
        .def("eventStopActorFaceFXAnim", &ASkeletalMeshActor::eventStopActorFaceFXAnim)
        .def("eventPlayActorFaceFXAnim", &ASkeletalMeshActor::eventPlayActorFaceFXAnim)
        .def("MAT_FinishAnimControl", &ASkeletalMeshActor::MAT_FinishAnimControl)
        .def("eventFinishAnimControl", &ASkeletalMeshActor::eventFinishAnimControl)
        .def("eventSetAnimPosition", &ASkeletalMeshActor::eventSetAnimPosition)
        .def("MAT_BeginAnimControl", &ASkeletalMeshActor::MAT_BeginAnimControl)
        .def("eventBeginAnimControl", &ASkeletalMeshActor::eventBeginAnimControl)
        .def("OnSetMaterial", &ASkeletalMeshActor::OnSetMaterial)
        .def("OnToggle", &ASkeletalMeshActor::OnToggle)
        .def("eventReplicatedEvent", &ASkeletalMeshActor::eventReplicatedEvent)
        .def("UpdateAnimSetList", &ASkeletalMeshActor::UpdateAnimSetList)
        .def("eventDestroyed", &ASkeletalMeshActor::eventDestroyed)
        .def("eventPostBeginPlay", &ASkeletalMeshActor::eventPostBeginPlay)
          ;
}