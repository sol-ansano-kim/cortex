//////////////////////////////////////////////////////////////////////////
//
//  Copyright (c) 2007-2008, Image Engine Design Inc. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are
//  met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the name of Image Engine Design nor the names of any
//       other contributors to this software may be used to endorse or
//       promote products derived from this software without specific prior
//       written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
//  IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
//  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
//  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
//  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
//  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
//  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
//  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
//  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
//  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//////////////////////////////////////////////////////////////////////////

#ifndef IE_CORE_TYPEIDS_H
#define IE_CORE_TYPEIDS_H

namespace IECore
{

enum TypeId
{
	InvalidTypeId = 0,
	ObjectTypeId = 1,
	DataTypeId = 2,
	FloatVectorDataTypeId = 3,
	DoubleVectorDataTypeId = 4,
	IntVectorDataTypeId = 5,
	UIntVectorDataTypeId = 6,
	CharVectorDataTypeId = 7,
	UCharVectorDataTypeId = 8,
	V2fVectorDataTypeId = 9,
	V2dVectorDataTypeId = 10,
	V3fVectorDataTypeId = 11,
	V3dVectorDataTypeId = 12,
	Box3fVectorDataTypeId = 13,
	Box3dVectorDataTypeId = 14,
	M33fVectorDataTypeId = 15,
	M33dVectorDataTypeId = 16,
	M44fVectorDataTypeId = 17,
	M44dVectorDataTypeId = 18,
	QuatfVectorDataTypeId = 19,
	QuatdVectorDataTypeId = 20,
	StringVectorDataTypeId = 21,
	FloatDataTypeId = 22,
	DoubleDataTypeId = 23,
	IntDataTypeId = 24,
	LongDataTypeId = 25, /// Obsolete: LongData has been removed. The typeId remains for compatibility with old files, which now load as IntData
	UIntDataTypeId = 26,
	CharDataTypeId = 27,
	UCharDataTypeId = 28,
	StringDataTypeId = 29,
	LongVectorDataTypeId = 30, /// Obsolete: LongVectorData has been removed. The typeId remains for compatibility with old files, which now load as IntVectorData
	CompoundDataTypeId = 31,
	V2fDataTypeId = 32,
	V3fDataTypeId = 33,
	V2dDataTypeId = 34,
	V3dDataTypeId = 35,
	Box2fDataTypeId = 36,
	Box3fDataTypeId = 37,
	Box2dDataTypeId = 38,
	Box3dDataTypeId = 39,
	M44fDataTypeId = 40,
	M44dDataTypeId = 41,
	QuatfDataTypeId = 42,
	QuatdDataTypeId = 43,
	Color3fDataTypeId = 44,
	Color4fDataTypeId = 45,
	Color3dDataTypeId = 46,
	Color4dDataTypeId = 47,
	Color3fVectorDataTypeId = 48,
	Color4fVectorDataTypeId = 49,
	Color3dVectorDataTypeId = 50,
	Color4dVectorDataTypeId = 51,
	BlindDataHolderTypeId = 52,
	RenderableTypeId = 53,
	ParameterListTypeId = 54, // Obsolete
	CompoundObjectTypeId = 55,
	M33fDataTypeId = 56,
	M33dDataTypeId = 57,
	Box2fVectorDataTypeId = 58,
	Box2dVectorDataTypeId = 59,
	BoolDataTypeId = 60,
	PrimitiveTypeId = 61,
	PointsPrimitiveTypeId = 62,
	ImagePrimitiveTypeId = 63,
	Box2iDataTypeId = 64,
	HalfVectorDataTypeId = 65,
	V2iDataTypeId = 66,
	MeshPrimitiveTypeId = 67,
	ShaderTypeId = 68,
	RunTimeTypedTypeId = 69,
	ParameterTypeId = 70,
	CompoundParameterTypeId = 71,
	StringParameterTypeId = 72,
	ValidatedStringParameterTypeId = 73,
	FileNameParameterTypeId = 74,
	IntParameterTypeId = 75,
	FloatParameterTypeId = 76,
	DoubleParameterTypeId = 77,
	BoolParameterTypeId = 78,
	V2fParameterTypeId = 79,
	V3fParameterTypeId = 80,
	V2dParameterTypeId = 81,
	V3dParameterTypeId = 82,
	Color3fParameterTypeId = 83,
	Color4fParameterTypeId = 84,
	Box2iParameterTypeId = 85,
	Box2fParameterTypeId = 86,
	Box3fParameterTypeId = 87,
	Box2dParameterTypeId = 88,
	Box3dParameterTypeId = 89,
	M44fParameterTypeId = 90,
	M44dParameterTypeId = 91,
	IntVectorParameterTypeId = 92,
	FloatVectorParameterTypeId = 93,
	DoubleVectorParameterTypeId = 94,
	StringVectorParameterTypeId = 95,
	V2fVectorParameterTypeId = 96,
	V3fVectorParameterTypeId = 97,
	V2dVectorParameterTypeId = 98,
	V3dVectorParameterTypeId = 99,
	Box3fVectorParameterTypeId = 100,
	Box3dVectorParameterTypeId = 101,
	M33fVectorParameterTypeId = 102,
	M44fVectorParameterTypeId = 103,
	M33dVectorParameterTypeId = 104,
	M44dVectorParameterTypeId = 105,
	QuatfVectorParameterTypeId = 106,
	QuatdVectorParameterTypeId = 107,
	Color3fVectorParameterTypeId = 108,
	Color4fVectorParameterTypeId = 109,
	NullObjectTypeId = 110,
	ParameterisedTypeId = 111,
	OpTypeId = 112,
	ReaderTypeId = 113,
	WriterTypeId = 114,
	ImageReaderTypeId = 115,
	ImageWriterTypeId = 116,
	CINImageReaderTypeId = 117,
	CINImageWriterTypeId = 118,
	EXRImageReaderTypeId = 119,
	EXRImageWriterTypeId = 120,
	JPEGImageReaderTypeId = 121,
	JPEGImageWriterTypeId = 122,
	TIFFImageReaderTypeId = 123,
	TIFFImageWriterTypeId = 124,
	ObjectReaderTypeId = 125,
	ObjectWriterTypeId = 126,
	PDCParticleReaderTypeId = 127,
	PDCParticleWriterTypeId = 128,
	PathParameterTypeId = 129,
	DirNameParameterTypeId = 130,
	V3iDataTypeId = 131,
	RendererTypeId = 132,
	Box3iDataTypeId = 133,
	ObjectParameterTypeId = 134,
	ModifyOpTypeId = 135,
	ImageOpTypeId = 136,
	PrimitiveOpTypeId = 137,
	ProceduralTypeId = 138,
	Box3iParameterTypeId = 139,
	V2iParameterTypeId = 140,
	V3iParameterTypeId = 141,
	ParticleReaderTypeId = 142,
	ParticleWriterTypeId = 143,
	MotionPrimitiveTypeId = 144,
	DPXImageReaderTypeId = 145,
	TransformTypeId = 146,
	MatrixTransformTypeId = 147,
	MotionTransformTypeId = 148,
	MatrixMotionTransformTypeId = 149,
	GroupTypeId = 150,
	AttributeStateTypeId = 151,
	VisibleRenderableTypeId = 152,
	StateRenderableTypeId = 153,
	OBJReaderTypeId = 154,
	TransformationMatrixfDataTypeId = 155,
	TransformationMatrixdDataTypeId = 156,
	PointNormalsOpTypeId = 157,
	PointDensitiesOpTypeId = 158,
	DPXImageWriterTypeId = 159,
	BoolVectorDataTypeId = 160,
	VectorDataFilterOpTypeId = 161,	
	RenderableParameterTypeId = 162,
	StateRenderableParameterTypeId = 163,
	AttributeStateParameterTypeId = 164,
	ShaderParameterTypeId = 165,
	TransformParameterTypeId = 166,
	MatrixMotionTransformParameterTypeId = 167,
	MatrixTransformParameterTypeId = 168,
	VisibleRenderableParameterTypeId = 169,
	GroupParameterTypeId = 170,
	MotionPrimitiveParameterTypeId = 171,
	PrimitiveParameterTypeId = 172,
	ImagePrimitiveParameterTypeId = 173,
	MeshPrimitiveParameterTypeId = 174,
	PointsPrimitiveParameterTypeId = 175,
	PreWorldRenderableTypeId = 176,
	CameraTypeId = 177,
	NURBSPrimitiveTypeId = 178,
	DataCastOpTypeId = 179,
	DataPromoteOpTypeId = 180,
	MatrixMultiplyOpTypeId = 181,
	PointBoundsOpTypeId = 182,
	RandomRotationOpTypeId = 183,
	V2iVectorDataTypeId = 184,
	V3iVectorDataTypeId = 185,
	PointMeshOpTypeId = 186,	
	ParticleMeshOpTypeId = 187,
	HalfDataTypeId = 188,
	MeshPrimitiveOpTypeId = 189,		
	PrimitiveEvaluatorTypeId = 190,
	MeshPrimitiveEvaluatorTypeId = 191,
	MeshPrimitiveImplicitSurfaceOpTypeId = 192,
	TriangulateOpTypeId = 193,	
	SpherePrimitiveEvaluatorTypeId = 194,
	SpherePrimitiveTypeId = 195,
	ConverterTypeId = 196,
	ToCoreConverterTypeId = 197,
	ImageCropOpTypeId = 198,
	MeshPrimitiveShrinkWrapOpTypeId = 199,
	ImagePrimitiveEvaluatorTypeId = 200,	
	FromCoreConverterTypeId = 201,
	ShortDataTypeId = 202,
	UShortDataTypeId = 203,
	ShortVectorDataTypeId = 204,
	UShortVectorDataTypeId = 205,
	PathVectorParameterTypeId = 206,	
	ColorTransformOpTypeId = 207,
	TransformOpTypeId = 208,
	ImageDiffOpTypeId = 209,
	CurvesPrimitiveTypeId = 210,
	CoordinateSystemTypeId = 211,
	MeshNormalsOpTypeId = 212,
	MeshMergeOpTypeId = 213,
	FontTypeId = 214,
	UniformRandomPointDistributionOpTypeId = 215,
	Int64DataTypeId = 216,
	UInt64DataTypeId = 217,
	Int64VectorDataTypeId = 218,
	UInt64VectorDataTypeId = 219,
	MappedRandomPointDistributionOpTypeId = 220,	
	PointRepulsionOpTypeId = 221,	
	
	// Remember to update TypeIdBinding.cpp !!!
	
	// If we ever get this far then the core library is too big.
	LastCoreTypeId = 99999,
	// All RunTimeTyped derived classes in extension
	// libraries should use a TypeId in the following range.
	// Don't put the TypeId in here. For python derived classes use 
	// the registerTypeId function in RunTimeTypedUtil.py to register the 
	// TypeId into the python TypeId enum and check for conflicts.
	FirstExtensionTypeId = 100000,
	
	FirstCoreDynamicsTypeId = 104000,
	LastCoreDynamicsTypeId = 104999,
	
	FirstCoreGLTypeId = 105000,
	LastCoreGLTypeId = 105999,	
	
	FirstCoreRITypeId = 106000,
	LastCoreRITypeId = 106999,
	
	FirstCoreNukeTypeId = 107000,
	LastCoreNukeTypeId = 107999,
	
	FirstCoreTruelightTypeId = 108000,
	LastCoreTruelightTypeId = 108999,
	
	FirstCoreMayaTypeId = 109000,
	LastCoreMayaTypeId = 109999,

	LastExtensionTypeId = 399999,
	// Any TypeIds beyond this point can be considered safe for private internal use.
	
};	

} // namespace IECore

#endif // IE_CORE_TYPEIDS_H
